`timescale 1ns / 1ps

module baggage_drop (
    output   [6 : 0]   seven_seg1, 
    output   [6 : 0]   seven_seg2,
    output   [6 : 0]   seven_seg3,
    output   [6 : 0]   seven_seg4,
    output   [0 : 0]   drop_activated,
    input    [7 : 0]   sensor1,
    input    [7 : 0]   sensor2,
    input    [7 : 0]   sensor3,
    input    [7 : 0]   sensor4,
    input    [15: 0]   t_lim,
    input              drop_en);
	  wire [7:0] t_act;
	  wire [15:0] square_to_display;
	  
	
	  
	sensors_input sensors ( .sensor1(sensor1),
									.sensor2(sensor2),
									.sensor3(sensor3),
									.sensor4(sensor4),
									.height(t_act) );
									
	square_root square (.in(t_act), .out(square_to_display) );
	
	
	display_and_drop dap (	.t_act(square_to_display >> 1), 
									.t_lim(t_lim), 
									.drop_en(drop_en), 
									.seven_seg1(seven_seg1),
									.seven_seg2(seven_seg2),
									.seven_seg3(seven_seg3),
									.seven_seg4(seven_seg4),
									.drop_activated(drop_activated));
									
									
	
endmodule

module sensors_input (
   output  reg [7 : 0]    height,
   input    [7 : 0]   sensor1,
   input    [7 : 0]   sensor2,
   input    [7 : 0]   sensor3,
   input    [7 : 0]   sensor4);
	reg [9:0] suma = 0;
	
	
	always@(*) begin 
		
		if( (sensor1 == 0) || (sensor3 == 0) )begin
			suma = (sensor2 + sensor4) ;
			if(suma[0] == 0)
				height = suma / 2;
				else
				height = (suma + 1) /2;
				
				
			end
		else if( (sensor2 == 0) || (sensor4 == 0) )begin
			suma = (sensor1 + sensor3) ;
				if(suma[0] == 0)
					height = suma / 2;
				else
					height = (suma + 1) /2;
			
			end
		else begin
			suma = (sensor1 + sensor2 + sensor3 + sensor4);
			if(suma[0] == 0 && suma[1] == 1)
				height = (suma +2) / 4;
				else if(suma[0] == 1 && suma[1] == 1)
				height = (suma + 3) / 4;
				else
				height = suma / 4;
			
		end
		
	end
		
	
endmodule

module square_root 
			#(parameter nr_biti = 16,
			parameter nr_iter = 12  ) (
		
    input  [(nr_biti/2) -1:0] in,   
    output  reg [nr_biti-1:0] out  
    );
	
	  reg [nr_biti-1:0] copie_in, copie_in_urmator;    // copie input
    reg [nr_biti-1:0] rezultat, rezultat_urmator;    // radacina intermediara
    reg [nr_biti+1:0] ac, ac_urmator;  // acumulator in el pastram bitii din care scadem 
    reg [nr_biti+1:0] test_res;     // rezultatul testului de semn 
	 reg [nr_biti-1:0] shifted_in;
      // iteratiile sunt jumatate din radicand nr_biti
    reg [3:0] i;     
		
		
		
    always @(*) begin
			shifted_in = in;
			shifted_in = shifted_in << 8;
            i = 0;
            rezultat = 0;
            {ac, copie_in} = {{nr_biti{1'b0}}, shifted_in, 2'b0}; // shiftam copie_in in acumulator
            while (i < nr_iter) begin  
		test_res = ac - {rezultat, 2'b01};
        	if (test_res[nr_biti+1] == 0) begin  //verificam daca MSB este 0 
             		{ac_urmator, copie_in_urmator} = {test_res[nr_biti-1:0], copie_in, 2'b0};
            		rezultat_urmator = {rezultat[nr_biti-2:0], 1'b1};
                end else begin
            		{ac_urmator, copie_in_urmator} = {ac[nr_biti-1:0], copie_in, 2'b0};
            		rezultat_urmator = rezultat << 1; // shiftam pe q la stanga
        	end
												//urmatoarea iteratie
                i = i + 1;
                copie_in = copie_in_urmator;
                ac = ac_urmator;
                rezultat = rezultat_urmator;
					 out = rezultat_urmator;
            end
 	  
        end
endmodule

	module display_and_drop(
    output  reg [6 : 0]   seven_seg1, 
    output  reg [6 : 0]   seven_seg2,
    output  reg [6 : 0]   seven_seg3,
    output  reg [6 : 0]   seven_seg4,
    output reg  [0 : 0]   drop_activated,
    input    [15: 0]   t_act,
    input    [15: 0]   t_lim,
    input              drop_en);

     reg flag_drop;
     reg height_ok;
    
     always @(*) begin
         
         flag_drop = 0;
         height_ok = 0;
         if(drop_en == 1)begin
            if(t_act < t_lim) begin
                //7seg pentru DROP
                seven_seg1 = 7'b1011110;
                seven_seg2 = 7'b1010000;
                seven_seg3 = 7'b1011100;
                seven_seg4 = 7'b1110011;
                height_ok = 1;
                flag_drop = 1;
            end
            else if(t_act > t_lim )begin
                  //7seg pentru HOT
					seven_seg1 = 7'b0000000;
					seven_seg2 = 7'b1110110;
					seven_seg3 = 7'b1011100;
					seven_seg4 = 7'b1111000;
                flag_drop = 1;
                height_ok = 0;
						end
			end
         
         if((t_act < t_lim) && (drop_en == 0) ) begin
             //7seg pentru COLD
            seven_seg1 = 7'b0111001;
            seven_seg2 = 7'b1011100;
            seven_seg3 = 7'b0111000;
            seven_seg4 = 7'b1011110;
            height_ok = 0;
            flag_drop = 0;
         end
         if((height_ok == 1)  && (flag_drop == 1) )
            drop_activated = 1;
         else
            drop_activated = 0;
     end
  
  
	  
endmodule
	 
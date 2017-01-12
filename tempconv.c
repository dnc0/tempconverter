/* tempconverter v0.2.1B
+use tempconvLib
+float value are retorned correct 

+if use most of 2 argments the application retorned error


 2017 Free domain licence
 by Marlon soares de lima
 email: marlonslbr@gmail.com

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tempconvLib.c"

/* Sintaxe
				command c2f | Celsius to Fahrenheit
				command c2k | Celsius to Kelvin
				command f2c | Fahrenheit to Celsius
				command f2k | Fahrenheit to Kelvin
				command k2c | Kelvin to Celsius
				command k2f | Kelvin to Fahrenheit

*/

int main(int argc, char *argv[]) {
	if((argc < 3) || (argc > 3)){
		printf("sintaxe error\n") ;
		return 0;
	}
	float value = atof(argv[2]);
	
	
	if(!strcmp(argv[1],"c2f")){
		printf("%.2f",c2f(value));
	}
	else if(!strcmp(argv[1],"c2k")){
		printf("%.2f",c2k(value));
	}
	else if(!strcmp(argv[1],"f2c")){
		printf("%.2f",f2c(value));
	}
	else if(!strcmp(argv[1],"f2k")){
		printf("%.2f",f2k(value));
	}
	else if(!strcmp(argv[1],"k2c")){
		printf("%.2f",k2c(value));
	}
	else if(!strcmp(argv[1],"k2f")){
		printf("%.2f",k2f(value));
	}
	else{
		printf("\"%s\" it is don't a valid command",argv[1]);	
	}
	printf("\n");
}//end main

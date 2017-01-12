/* tempconvLib.c
	A libary for temperature conversion
	V0.2.1B

*/

float c2f(float c){
	return c * 1.8 + 32;
}

float c2k(float c){
	return c + 273.15;
}

float f2c(float f){
	return (f - 32)/(float)1.8;
}

float f2k(float f){
	return (f + 459.67) / 1.8;
}

float k2c(float k){
	return (float)k -273.15;
}

float k2f(float k){
	return (((float)k - 273.15) * 1.8) +32; 
}

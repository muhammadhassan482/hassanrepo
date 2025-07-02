#include<stdio.h>
float convertion(float x);
float units(float y);
int main(){
	float power;
	float result,result2;
	int time;
	printf("enter time in hours");
	scanf("%d",&time);
	printf("enter the power of a device");
	scanf("%f",&power);
	result= float convertion(power)
	result2= float units(result, time);
    
	
	
}
float convertion(foat x){
	float convert;
	convert=x/1000000;
	return convert;
}
float units(float y,int z){
	float units;
	units= y*z/1000;
	return units;
}


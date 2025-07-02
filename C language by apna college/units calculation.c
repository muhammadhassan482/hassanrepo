#include<stdio.h>
float convertion(int x);
float units(float y,int z);
int main(){
	int power,time;
	printf("\t Enter the power of the device");
	scanf("%d",&power);
	printf("\n\n\t\t enter the number of hours of the usage of that device");
	scanf("%d",&time);
	float result = convertion(power);
	float result2 = units(result,time);
	printf("%d",result2);
	
	return 0;	
}
float convertion(int x){
	float result = x*1000;
	return result;
}
float units(float y,int z){
	float result = y*z/1000;
	return result;
}

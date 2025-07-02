#include<stdio.h>
float convertion(float x);
float formula();
int main(){
	float power;
	float unit;
	printf("enter power of a device");
	scanf("%d",&power);
	printf("%f",convertion(power));
}
float convertion(float x){
	float convert= x/1000000;
	return convert;
}

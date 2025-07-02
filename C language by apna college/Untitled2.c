#include<stdio.h>
int main(){
	float result;
	int time, power;
	printf("\n\n\t\t Enter the power of the device = ");
	scanf("%d",&power);
	printf("\n\n\t\t Enter the of usage in one day = ");
	scanf("%d",&time);
	result = (power*time*30)/1000;

	printf("\n\n\t\t Your device consumes %f units in one month", result);
return 0;
	
}

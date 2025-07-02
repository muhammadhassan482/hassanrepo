#include<stdio.h>
int main(){
	int num;
	printf("\n\n\t\tenter a number  : ");
	scanf("%d",&num);
	int i=2;
	while(i<num)
	{
		if(num%i==0){
		  printf("\t\tnot a prime number");
		  break;
	    }
		i++;
	}
	printf("prime");
}

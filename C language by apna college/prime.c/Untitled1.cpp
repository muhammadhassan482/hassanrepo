#include<stdio.h>
int prime(int);
int main(){
	int n;printf("enter a number");
	scanf("%d");
	int prime = prime(n);
	if(prime==0)
	   printf("number is a prime");
	else
	   printf("number is not a prime");
}
int prime(int x){
	int i;
	for(i=2;i<x;i++)
	   if(x%i==0)
	      return 1;
	return 0;
}






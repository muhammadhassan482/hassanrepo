#include<stdio.h>
int main(){
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	if(marks<30 && marks>=0)
	   {
	   	printf("C");
	   }
	else if(marks>=30 && marks<=70)
	   {
	   	printf("B");
	   }
		else if(marks>=70 && marks<=90)
	   {
	   	printf("A");
	   }
		else if(marks>=90 && marks<=110)
	   {
	   	printf("A+");
	   }
}

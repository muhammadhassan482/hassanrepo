#include<stdio.h>
int main(){
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
    if(marks>=30 && marks<=100)
	  {
      	printf("pass");
	  }
	else if(marks<30 && marks>=0)
	  {
	    printf("fail");	
	  }	  
	else 
	{
		printf("Not a valid number :");
	}
	  
	  
}

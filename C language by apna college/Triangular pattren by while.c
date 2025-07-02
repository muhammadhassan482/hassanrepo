#include<stdio.h>
int main(){
	int lines;
	printf("\n\n\t\t Enter the number of lines = ");
	scanf("%d",&lines);
	int i=1;
	while(i<=lines){
		int j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
		int  j=lines;
	while(i>=1){
		int j=i;
		while(j>=1){
			printf("*");
			j--;
		}
		i--;
		printf("\n");
	}
}

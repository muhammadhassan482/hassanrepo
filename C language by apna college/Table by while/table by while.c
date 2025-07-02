#include<stdio.h>
int main()
{
	int i=1,j=1;
	while(i<=12)
	{ 
		int j=1;
		printf("\n\t\tTable of %d\n\n ", i);
		while(j<=10)
		{
		printf("\t\t%d*%d=%d\n",i,j,j*i);
		j++;
	    }
	    i++;
	}
return 0;
}

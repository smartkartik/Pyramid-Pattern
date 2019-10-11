  
#include<stdio.h>

int main()
{
	int i,a,j,k=0;
	printf("enter the number of rows:\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
	    	printf(" ");
		}
		while(k!=(2*i-1))
		{
		printf("*");
		k++;
		}
		k=0;
		printf("\n");
	
	}
	
}

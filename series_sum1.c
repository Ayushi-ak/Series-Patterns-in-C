//Program to find the sum of a Series 1 + 1/2^2 + 1/3^2 + …..+ 1/n^2
#include<stdio.h>
int main()
{
	int n,i;
	float sum=0.0;
	printf("\n");
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\n");

	for(i=1;i<=n;i++)
	{
	    sum=sum+1/(float)(i*i);	
    } 
    printf(" %f ",sum); 
    printf("\n");
}

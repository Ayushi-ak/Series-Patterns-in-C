//Program to Find the Sum of Series 1^1 + 2^2 + 3^3 + … + n^n
#include<stdio.h>
#include<math.h>
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
	    sum=sum+pow(i,i);		
    } 
    printf(" %f ",sum); 
    printf("\n");
}

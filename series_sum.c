//Program to find sum of series 1 + 1/2 + 1/3 + 1/4 + .. + 1/n
#include<stdio.h>
int main()
{
	int n;	
	float sum=0,k;
	printf("\n");
	printf("Enter the range : ");
	scanf("%d",&n);
	printf("\n");
	int i =1;
	while(i<=n)
	{	
		k=(float)1/i;
	    sum=sum+k;
		i++;	
    } 
    printf(" %f ",sum); 
    
    printf("\n");
}

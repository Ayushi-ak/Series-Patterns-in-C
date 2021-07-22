//Program to find sum of even numbers between 1 to n
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n");
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\n");
	printf("Sum of the even numbers between 1 to %d are:",n);
	for(i=1;i<=n;i++)
	{
        if(i%2==0)
	    {
	    	sum = sum+i;
        }	
    }
    printf(" %d ",sum); 
    printf("\n");
}

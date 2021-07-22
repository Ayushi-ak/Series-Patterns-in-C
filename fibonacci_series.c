//Program to display Fibonacci series
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("\n");
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\n");
	printf("Fibonacci series: %d %d",a,b);
	for(i=1;i<=n;i++)
	{
	    c = a+b;
	    a=b;
	    b=c;
		printf(" %d ",c);	
    } 
    printf("\n");
}

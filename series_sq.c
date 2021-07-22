//program to find out the sum of series 1^2 + 2^2 + …. + n^2
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n");
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\n");
	printf("");
	for(i=1;i<=n;i++)
	{	if(i==n)
		{
			printf("%d * %d =",i,i);
		}
		else
		{
			printf("%d * %d + ",i,i);	
		}
	    sum=sum+(i*i);	  
    }  
    printf(" %d ",sum);
    printf("\n");
}

//program to calculate the sum of the series 1-2+3-4+5-6+7-8...N terms
#include<stdio.h>
int main()
{
	int n,i,output;
	int even=0, odd=0;
	printf("\n");
	printf("Enter the integer:");
	scanf("%d",&n);
	printf("\n");
	printf("");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even = even+i;
        }
        else	
		{
			odd = odd+i;
		}
	}
	output= odd-even;
    printf(" %d ",output);    
    printf("\n");
}

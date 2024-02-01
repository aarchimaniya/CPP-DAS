#include<stdio.h>
void main()
{
	int n;
	printf("enter length of array:");
	scanf("%d",&n);
	
	int a[n],sum=0,i;
	
	for (i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]:%d\n",i,sum);
		sum=sum+a[i];
		
		}	
	
}

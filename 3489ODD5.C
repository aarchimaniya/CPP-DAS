#include<stdio.h>
#include<conio.h>
void main()
{
       int i=1,n;
       clrscr();
       printf("enter n :");
       scanf("%d",&n);
       for(i=1; i<=n; i++)
       {
	    if(i%2 == 1)
	    {
		 printf("%d " ,i);
	    }
	}
	getch();
}
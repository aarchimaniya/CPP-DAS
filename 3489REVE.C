#include<stdio.h>
#include<conio.h>
void main()
{
      int n,reverse=0,rem;
      clrscr();
      printf("enter a number :");
      scanf("%d",&n);
      while(n!=0)

      {

	    rem=n%10;
	    reverse=reverse*10+rem;
	    n/=10;
      }

	    print("reversed number:%d",reverse);
	    getch();
}





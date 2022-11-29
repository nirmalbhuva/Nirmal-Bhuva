#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter a,b,c&d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	(a>b)
	     ? (a>c)
		   ? (a>d)
			 ? printf("A is big.")
			 : printf("D is big")
		   : (c>d)
			  ? printf("C is big")
			  : printf("D is big")
	     : (b>c)
		   ? (b>d)
			  ? printf("B is big")
			  : printf("D is big")
		   : (c>d)
			 ?printf("C is big")
			 :printf("D is big");
		getch();
}

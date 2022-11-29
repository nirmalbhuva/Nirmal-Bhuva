#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter a,b & c:");
	scanf("%d%d%d",&a,&b,&c);
	(a<b)
	     ? (a<c)
		    ? printf("A is small")
		    : printf("C is small")

	     : (b<c)
		    ? printf("B is small")
		    : printf("C is small");
	getch();
}


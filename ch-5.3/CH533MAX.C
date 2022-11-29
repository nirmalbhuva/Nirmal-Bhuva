#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter a");
	scanf("%d",&a);
	printf("Enter b");
	scanf("%d",&b);
	printf("Enter c");
	scanf("%d",&c);
	printf("Enter d");
	scanf("%d",&d);
	printf("Enter e");
	scanf("%d",&e);
	(a>b)
	     ?(a>c)
		  ? (a>d)
			?(a>e)
			     ?printf("A is big")
			     :printf("E is big")
			:(d>e)
			     ?printf("D is big")
			     :printf("E is big")
		  : (c>d)
			?printf("C is big")
			:printf("D is big")
	     :(b>c)
		  ?(b>d)
		       ?(b>e)
			    ?printf("B is big")
			    :printf("E is big")
		       :(d>e)
			    ?printf("D is big")
			    :printf("E is big")


		  :(c>d)
		       ?(c>e)
			    ?printf("C is big")
			    :printf("E is big")
		       :(d>e)
			    ?printf("D is big")
			    :printf("e is big");
	getch();
}


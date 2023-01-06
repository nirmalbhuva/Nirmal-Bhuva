#include<stdio.h>
main()
{
	int n,j;
	
	int *p,*p2;
	
	p=&n;
	p2=&j;
	
	printf("N : ");
	scanf("%d",&(*p));
	
	printf("J : ");
	scanf("%d",&(*p2));
	*p= *p+ *p2;
	*p2= *p- *p2;
	*p= *p- *p2;
	printf("N : %d",*p);
	printf("\nJ : %d",*p2);
}

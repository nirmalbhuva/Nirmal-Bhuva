#include<stdio.h>


main(){
	int a;
	int *p;
	p = &a;
	printf("squre of a: ");
	scanf("%d",&a);
	printf("squre of a:  %d",*p * *p);
}

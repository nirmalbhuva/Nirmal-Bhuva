#include<stdio.h>
#include<conio.h>
main() {
	int a;
	clrscr();
	printf("enter value of a:");
	scanf("%i",&a);
	if(a>0){
	    printf("the number you gave is positeve");

	}
	else if(a==0){
	    printf("the number you gave is is nutaral");
	}
	else {
	printf("the number you gave is nagative");
	}
	getch();


}
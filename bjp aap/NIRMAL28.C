#include<stdio.h>
#include<conio.h>
mian()
{

	int bjp,aap,con;
	clrscr();
	printf("bjp is win:");
	scanf("%d",bjp);
	printf("aap is win:");
	scanf("%d",aap);
	printf("con is win:");
	scanf("%d",con);

	if(bjp>aap)
	{
		if(aap>con)
		{
			printf("aap is win");
		}
		else
		{
			printf("con is win");
		}

	}
	else
	{
		printf("bjp is win");
	}

	getch();
}
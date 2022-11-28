#include<stdio.h>
#include<conio.h>
main()
{

	int bjp,aap,con,nota ;

	clrscr();

	printf("seat of bjp:");
	scanf("%d",&bjp);
	printf("seat of aap:");
	scanf("%d",&aap);
	printf("seat of con:");
	scanf("%d",&con);
	printf("seat of nota:");
	scanf("%d",&nota);

	if(bjp>aap)
	{
		if(bjp>con)
		{
			if(bjp>nota)
			{
				printf("bjp is win");
			}
			else
			{
				printf("nota is win");
			}
		}
		else
		{

			if(con>nota)
			{
				printf("con is win");
			}
			else
			{
				printf("nota is win");
			}

		}

	}
	else
	{
		if(aap>con)
			{
				if(aap>nota)
			{
				printf("aap is win");
			}
			else
			{
				printf("nota is win");
			}
		}
		else
		{

			if(con>nota)
			{
				printf("con is win");
			}
			else
			{
				printf("nota is win");
			}

		}

	}

	getch();
}
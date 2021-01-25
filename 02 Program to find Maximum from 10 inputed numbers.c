#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Max=0, Cnt=0;
	
	printf("\n Enter 10 numbers =");
	
	for(Cnt=1; Cnt<=10; Cnt++)
	{
		printf("\n\t Enter number %d=",Cnt);
		scanf("%d",&No);
		
		if(Cnt==1)
		{
			Max=No;
			continue;
		}
		
		if(No>Max)
		{
			Max=No;
		}
	}
	
	printf("\n Press any key to get maximum from given numbers =");
	getche();
	
	printf("\n Maximum of given numbers = %d", Max);
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
}
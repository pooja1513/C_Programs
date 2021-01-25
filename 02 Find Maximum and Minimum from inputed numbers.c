#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Min=0, Max=0;
	char ch='1';
	
	printf("\n Enter numbers =");
	
	for(;;)
	{
		printf("\n\t Enter number =");
		scanf("%d",&No);
		
		if(No<=0)
		{
			break;
		}
		
		if(ch=='1')
		{
			Min=No;
			Max=No;
			ch++;
			continue;
		}
		
		if(No<Min)
		{
			Min=No;
		}
		
		if(No>Max)
		{
			Max=No;
		}
	}
	
	printf("\n Press any key to get maximum & minimum from given numbers ");
	getche();
	
	printf("\n Maximum of given numbers = %d",Max);
	
	printf("\n Minimum of given numbers = %d", Min);
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
}
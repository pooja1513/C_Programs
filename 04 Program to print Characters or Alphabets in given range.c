#include<stdio.h>
#include<conio.h>

int main()
{
	char Lch='\0',Sch='\0',Ech='\0';
	
	printf("\n Enter Starting Character=");
	Sch=getche();
	
	printf("\n Enter Ending Character=");
	Ech=getche();
	
	if(Sch<Ech)
	{
		for(Lch=Sch; Lch<=Ech; Lch++)
		{
			printf("\n %c",Lch);
		}
	}
	else
	{
		for(Lch=Sch; Lch>=Ech; Lch--)
		{
			printf("\n %c",Lch);
		}
	}
	
	printf("\n\n Thanks!!!");
	
	getch();
	return 0;
}
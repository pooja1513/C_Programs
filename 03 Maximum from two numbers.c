#include<stdio.h>
#include<conio.h>

int main()
{
	int Num1=0,Num2=0;
	
	printf("\n Enter two Interger numbers =");
	scanf("%d%d",&Num1,&Num2);
	
	if(Num1==Num2)
	{
		printf("\n Both Given Numbers are Equal");
		goto DWN;
	}
	if(Num1>Num2)
	{
		printf("\n Number %d is maximum",Num1);
	}
	else
	{
		printf("\n Number %d is maximum",Num2);
	}
	
	DWN:
	
	printf("\n Thanks!!!");
	getch();
	return 0;
}
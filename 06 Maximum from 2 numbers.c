#include<stdio.h>
#include<conio.h>

int main()
{
	int Num1=0,Num2=0;
	
	printf("\n Enter 2 Integer Numbers=");
	scanf("%d%d",&Num1,&Num2);

    (Num1==Num2)? printf("\n Both Given Numbers are Equal"):(Num1>Num2)? printf("\n Number %d is maximum",Num1):printf("\n Number %d is maximum",Num2);
	
	printf("\n Thanks");
	getch();
	return 0;
}
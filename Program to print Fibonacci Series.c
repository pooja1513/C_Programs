#include<stdio.h>
#include<conio.h>

int main()
{
	int No1=0, No2=1, No3=0, Cnt=0;
	
	printf("\n Enter Count for Fibonacci Series =");
	scanf("%d",&Cnt);
	
	printf("\n Fibonacci Series =0 \t 1");
	
	while(Cnt>2)
	{
		No3 = No1 + No2;
		
		printf("\t %d",No3);
		
		No1=No2;
		No2=No3;
		
		Cnt--;
	}
	
	getch();
	return 0;
}
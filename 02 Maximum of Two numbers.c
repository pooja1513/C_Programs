#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0,Num2=0;
    
    printf("\n Enter 2 Interger Numbers =");
    scanf("%d%d",&Num1,&Num2);
    
    if(Num1==Num2)
    {
    	printf("\n Both Given Numbers are Equal");
    }
    else if(Num1>Num2)
    {
    	printf("\n Number %d is maximum",Num1);
   }
   else
   {
   	printf("\n Number %d is Maximum",Num2);
   }
    
    printf("\n\n Thanks!!!");
    
    getch();
    return 0;
}

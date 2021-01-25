#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sum =0, Cnt =0;
    printf ("\n Enter 10  Numbers=");
    
   for(Cnt=1; Cnt<=10; Cnt++)
    {
       printf("\n\t Enter Number %d =",Cnt);
       scanf("%d",&No);
       
       Sum=Sum+No;
    }
    
    printf ("\n Press Any Key to get Summation of a Given Numbers =");
    getche();
    
    system("cls");
    
    printf ("\n Summation of Given Numbers = %d",Sum);

    printf("\n\n Thanks!!!");
    
    getch();
    return 0;
}
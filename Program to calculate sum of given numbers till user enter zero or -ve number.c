#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0, Sum=0, Cnt=0;
    
    printf("\n Enter Numbers to calculate Their Sum\n(Will Stop Summation After 0/-ve Input)=");
    
   for(Cnt=1; ; Cnt++)
    {
       printf("\n\t Enter Number %d=",Cnt);
       scanf("%d",&No);
       
       if(No<=0)
        {
        	break;
        }
        
       Sum = Sum + No;
    }
    
    printf("\n Press Any Key to get Summation of a Given Numbers =");
    getche();
    
    printf ("\n Summation of Given Numbers = %d",Sum);
    
    printf("\n\n Thanks!!!");
    
    getch();
    return 0;
}
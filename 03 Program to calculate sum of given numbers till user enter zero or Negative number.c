#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No=0, Sum=0, Cnt=1;
    
    printf("\n Enter Numbers to calculate Their Sum\n(Will Stop Summation After 0/-ve Input)=");
   
    Up:
    
    printf("\n\t Enter Number %d=",Cnt);
    scanf("%d",&No);
       
    if(No<=0)
    {
        goto Out;
    }
    
    Sum = Sum + No;
    Cnt++;
    goto Up;
        
    Out:
    
    printf("\n Press Any Key to get Summation of Given Numbers");
    getche();
    
    printf ("\n Summation of Given Numbers = %d",Sum);
    
    printf("\n\n Thanks!!!");
    
    getch();
    return 0;
}
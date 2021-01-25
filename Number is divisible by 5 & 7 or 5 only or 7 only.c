#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;
    
    printf("\n Enter integer Number=");
    scanf("%d",&Num);

    if((Num%5==0) && (Num%7==0))
    {
       printf("\nNumber is Divisible by 5 & 7");
    }
    else if(Num%5==0)
    {
        printf("\nNumber is Divisible by 5");
    }
    else if(Num%7==0)
    {
        printf("\nNumber is Divisible by 7");
    }
    else
    {
       printf("\nNumber is Not  Divisible by 5 & 7");
    }

    printf ("\nThanks");
    getch();
    return 0;
}
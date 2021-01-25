#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    
    printf("\nEnter a character to check whether,\n it is UpperCase or LowerCase =");
    ch=getche();
    
    if((ch>='A') && (ch<='Z'))
    {
    	printf("\n\nGiven Character is UpperCase Letter");
    }
    else if((ch>='a') && (ch<='z'))
    {
    	printf("\n\nGiven Character is LowerCase Letter");
    }
    else
    {
    	printf("\n\nGiven Character is Neither LowerCase Nor UpperCase");
    }
    
    getch();
    return 0;
}

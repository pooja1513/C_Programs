#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    
    printf("\nEnter a character to check whether,\n it is Uppercase or Lowercase or Digit or Special Symbol");
    scanf("%c",&ch);
    
    if((ch>='A')&&(ch<='Z'))
    {
    	printf("\n\nGiven Character is Uppercase letter");
    }
    else if((ch>='a')&&(ch<='z'))
    {
    	printf("\n\nGiven Character is Lowercase letter");
    }
    else if((ch>='0')&&(ch<='9'))
    {
    	printf("\n\nGiven Character is Digit");
    }
    else
    {
    	printf("\n\nGiven Character is Special Symbol");
    }
    
    printf("\n\n Thanks");
    getch();
    return 0;
}

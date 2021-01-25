#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    
    printf("\nEnter a character to check whether,\n it is Alphabets or Digit==");
    scanf("%c",&ch);
    
    if(((ch>='A')&&(ch<='Z')) || ((ch>='a')&&(ch<='z')))
    {
    	printf("\n\nGiven Character is Alphabets");
    }
    else if((ch>='0')&&(ch<='9'))
    {
    	printf("\n\nGiven Character is Digit");
    }
    else
    {
    	printf("\n\nGiven Character is Special Symbol");
    }
    
    getch();
    return 0;
}

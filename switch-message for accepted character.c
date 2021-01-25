#include<stdio.h>
#include<conio.h>

int main()
{
    char ch= '\0';
    
    printf("\n Enter a Character to View Corresponding Message=");
    ch=getche();
    
    switch(ch)
    {
        case 'a':
                      printf("\n Welcome");
                      break;
      
        case 'A':
                      printf("\n Welcome");
                      break;
                    
        case 'b':
                      printf("\n Good Bye");
                      break;
                    
        case 'B':
                      printf("\n Good Bye");
                      break;

        case 'c':
                      printf("\n Have a Nice Day");
                      break;
                  
        case 'C':
                      printf ("\n Have a Nice Day");
                      break;

       case 'd':
                     printf("\n Good Day");
                     break;
             
       case 'D':
                     printf ("\n Good Day");
                     break;
                  
       default:
                    printf ("\n No Message for such Character");
                    break;
    }
  
    printf("\n Thanks!!!");
    
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>

int main ()
{
  int No=0;
  
  printf("\n ASCII Table=>\n\n");
    
  for(No=0;No<128;No++)
  {
    printf("\n\t\t%d=%C",No,No);
  }
  
  printf("\n\nThanks ");
  
  getch();
  return 0;
}


#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0;
  Up:
  
  printf("\n Enter an Integer Number=");
  scanf("%d",&Num);
  
  if(Num==0)
  {
  	printf("\n Given number is Neutral");
  	goto Up;
  }
  
  (Num%2==0)? printf("\n Given number is Even"):printf("\n Given number is Odd");
 
  printf("\n\n Thanks");
  getch();
  return 0;
}


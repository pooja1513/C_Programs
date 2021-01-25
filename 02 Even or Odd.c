#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0;
  
  printf("\n Enter an Integer Number=");
  scanf("%d",&Num);
  
  if(Num==0)
  {
  	printf("\n Given number is Neutral");
  }
  else if(Num%2==0)
  {
  	printf("\n Given number is Even");
  }
  else
 {
   printf("\n Given number is Odd");
 }
 
  printf("\n\n Thanks");
  getch();
  return 0;
}


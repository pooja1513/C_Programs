#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\n size for integer variable in this environment=%d",sizeof(int));
	
	printf("\n size for character variable in this environment=%d",sizeof(char));
	
	printf("\n size for short int variable in this environment=%d",sizeof(short int )); 
	
	printf("\n size for float variable in this environment=%d",sizeof(float));
	
	printf("\n size for double variable in this environment=%d",sizeof(double)); 
	
    getch();
    return 0;
}
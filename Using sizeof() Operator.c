#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 15;
    char ch='P';
    
    printf("\nsize for integer variable Num in this environment=%d",sizeof(Num));
    
    printf("\nsize for character variable ch in this environment=%d",sizeof(ch));
    
    printf("\n\n====================***************====================\n");
    
    printf("\nsize for integer variable Num in this environment=%d",sizeof(Num));
    
    printf("\nsize for integer variable in this environment=%d",sizeof(int));
    
    printf("\nsize for character variable in this environment=%d",sizeof(char));
    
    printf("\nsize for short int variable in this environment=%d",sizeof(short int ));
    
    printf("\nsize for float variable in this environment=%d",sizeof(float));
    
    printf("\nsize for double variable in this environment=%d",sizeof(double)); 
   
     getch();
    return 0;
}
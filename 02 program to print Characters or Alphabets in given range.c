#include<stdio.h>
#include<conio.h>

int main()
{
	char ch ='\0';
	
	for(ch='P'; ch>='A'; ch--)
	{
		printf("\n %c",ch);
	}
	
	printf("\n\n Thanks!!!");
	
	getch();
	return 0;
}
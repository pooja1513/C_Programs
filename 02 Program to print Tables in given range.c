#include<stdio.h>
#include<conio.h>

int main()
{
	int RN=0, CN=0, SNo=0, ENo=0;
	
	printf("\n Enter Table range  From & To  = ");
	scanf("%d%d",&SNo,&ENo);
	
	printf("\n Tables From %d to %d as follows = \n\n",SNo,ENo);
	
	for(RN=1; RN<=10; RN++)
	{
		if(SNo<ENo)
		{
			for(CN=SNo; CN<=ENo; CN++)
			{
				printf("%3d ",CN*RN);
		    }
		}
		else
		{
			for(CN=SNo; CN>=ENo; CN++)
			{
				printf("%3d ",CN*RN);
			}
		}
		printf("\n");
	}
	getche();
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],n,d,i;
	clrscr();
	printf("Enter elements= ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter number u want to replace= ");
	scanf("%d",&d);
	printf("Enter number u want to replace with %d= ",d);
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(num[i]==d)
		{
			num[i]=n;
		}
		printf("%d ",num[i]);
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20],i;
	clrscr();
	printf("Enter elements= ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements= ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}

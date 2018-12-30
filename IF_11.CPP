//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int days,day,month;
	float temp;

	printf("Enter Days :");
	scanf("%d",&days);

	printf("==================\n");

	month=days/30;
	day=days%30;

	printf("\nMonth is : %d",month);
	printf("\nDay is   : %d",day);

	getch();
}

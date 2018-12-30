//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float profit,dividend;

	printf("Enter Basic Salary :");
	scanf("%f",&profit);

	printf("====================================");

	if(profit>10000)
		printf("\nDividend is           :%.2f",profit*0.05);
	else
		printf("\nDividend is not allow");

	getch();
}

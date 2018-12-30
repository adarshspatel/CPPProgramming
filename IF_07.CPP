//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int year;
	float temp;


	printf("Enter Year :");
	scanf("%d",&year);

	printf("==================\n");

	temp=year%4;

	if(temp>0)
		printf("Year is not Leap Year");
	else
		printf("Year is Leap Year");

	getch();
}

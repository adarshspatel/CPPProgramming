//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int number;

	printf("Enter Number (Positive, Negative or Zero) :");
	scanf("%d",&number);

	printf("===========================================\n");

	if(number==0)
		printf("Number is : 0");
	else
	{
		if(number>0)
			printf("Number is : Positive");
		else
			printf("Number is : Negative");
	}

	getch();
}

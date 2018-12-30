//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>

struct val			//structure define
{
	char name[20];
	float b,d;
};

void main()
{
	struct val c;	//structure variable
	clrscr();

	printf("Enter the Name : ");
	gets(c.name);

	printf("Enter Float 1 :");
	scanf("%f",&c.b);

	printf("Enter Float 2 :");
	scanf("%f",&c.d);

	printf("\n the Answer is : %-10s %.2f %.2f",c.name,c.b,c.d);

	getch();
}

//Written by Adarsh Patel
// Decimal to Hexa
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();
	char str[]={"MCA BCA"}; //one to one relationship
	char str1[50]={NULL}; //one to many relationship

	printf("Display Str : %s \n\n",str); //all char with space

	int i=0;

	while(str[i]!=NULL)
	{
		printf("%c",str[i]);
		i++;
	}

	printf("\n\nEnter String 1 : ");
	scanf("%s",&str1);			//scan untill first space

	printf("Display Str 1 : %s",str1);

	getch();
}

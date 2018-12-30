//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	clrscr();
	char ch[20],find[20],*i;
//	int *i;

	printf("Enter String 1 : ");
	gets(ch);

	printf("Enter String to Find :");
	gets(find);

//	printf("%d",strstr(ch,find));


	if(strstr(ch,find)==NULL)
		printf("String Not Found");
	else
		printf("String Found");



	getch();
}

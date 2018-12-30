//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>
# include <string.h>
# include <ctype.h>

void main()
{
	clrscr();
	char str[3];
	int i=0,j=0;

	printf("Enter First and Last Character String :");
	gets(str);

	i=toascii(str[0]);

	while(toascii(str[2])!=i)
	{
		printf("%c",i);
		i=i+1;

		if(i==91)
			i=65;
	}
	putchar(str[2]);

	getch();
}

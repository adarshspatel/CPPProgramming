//Written by Adarsh Patel

//Remove Spaces (Leading, Trailing & Inbetween)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	void transfer(char [], int);
	char str[30];

	printf("Enter String :");
	gets(str);

	int i=0;
	puts(str);

	do{
		if((str[i]==' ' && (str[i+1]==' ' || str[i+1]==NULL)) || (str[0]==' '))
			transfer(str,i);
		else
			i++;
		puts(str);
	}while(str[i]!=NULL);

	printf("\n Actual length of the screen is : %d",strlen(str));

	getch();
}

void transfer(char str[],int n)
{
	int i;

	for(i=n+1;str[i]!=NULL;i++)
	{
		str[i-1]=str[i];
	}
		str[i-1]=NULL;
}


//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	clrscr();
	int i,n,j=0;
	char str[70],addstr[50];

	printf("Enter the String :");
	gets(str);

	printf("Enter New String to Enter : ");
	gets(addstr);

	printf("Enter Position At : ");
	scanf("%d",&n);

	j=strlen(addstr);

	for(i=strlen(str);i>=n;i--)
	{
		str[i+j]=str[i];
	}

	for(i=0;i<strlen(addstr);i++)
	{
		str[i+n]=addstr[i];
	}
	puts(str);
	printf("New Strlen() is : %3d",strlen(str));


	getch();
}

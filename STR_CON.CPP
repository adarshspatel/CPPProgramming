//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
# include <string.h>

void main()
{
	clrscr();
	char str1[20]={"This is My "}, str2[20];
	int i=0,j=0;

	printf("Enter String 2 :");
	gets(str2);

	printf("\nConcatenate the String at Str 1 with the use of Logic\n\n");

	while(1)
	{
		if(str1[i]!=NULL)
		{
			i=i+1;
			continue;
		}

		str1[i]=str2[j];
		i=i+1;
		j=j+1;

		if(str2[j]==NULL)
		break;
	}
	str1[i]=NULL;
	printf("String 1 is \n\n");
	puts(str1);

	printf("\n Concatenate with the use of function strcat()");
	strcat(str1,str2);
	printf("\n Content of Str 1 :");
	puts(str1);

	getch();
}

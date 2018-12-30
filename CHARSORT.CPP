//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <string.h>
#define NAME 5
#define SIZE 10
void main()
{
	clrscr();
	char ch[NAME][SIZE]={"Ram","Sita","Lakhan","Ramji","Laxman"};
	int i,j;

	char dummy[SIZE];

	for(i=0;i<NAME;i++)
	{
		for(j=i+1;j<NAME;j++)
		{
			if(strcmp(ch[i],ch[j])>0)
			{
				strcpy(dummy,ch[j]);
				strcpy(ch[j],ch[i]);
				strcpy(ch[i],dummy);
			}
		}

	}

	for(i=0;i<NAME;i++)
		puts(ch[i]);

	getch();

}

//Written by Adarsh Patel

		//return back largest value
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char ch[30]={"z This is my deprtment"};
	char largest(char []);
	clrscr();

	printf("The largest character is : %c ", largest(ch));
	getch();
}

char largest (char ch[])
{
	int i;
	char max;

	max=ch[0];

	for(i=1;i<strlen(ch);i++)
	{
		if(max<ch[i])
			max=ch[i];
	}
	return(max);
}



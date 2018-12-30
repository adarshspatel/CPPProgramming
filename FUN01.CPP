//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	void printline();			//declaration
	void printline1(int,char);    //declaration with parameter

	char ch[6][10]={"Ram","Sita","Lakhan","Ramji","Kapil","Kartik"};
	int i;		//scope of the variable within main function

	printline1(10,'@');

	for(i=0;i<6;i++)
	{
		puts(ch[i]);
		printline();		//call the function
	}

	printline1(10,'&');		//call the function

	getch();

}
void printline()	//actual function or called function
{
	int i;
	for(i=0;i<20;i++)
		putchar('*');
	printf("\n");
}
void printline1(int val,char ch)
{
	int i;
	for(i=0;i<val;i++)
		putchar(ch);
	printf("\n");
}
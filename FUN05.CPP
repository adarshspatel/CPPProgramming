//Written by Adarsh Patel

		//return back largest value
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int c[3]={11,12,13};
	clrscr();

	void pass1(int [][3]);
	void pass2(int []);

	printf("Two dimention array :\n");
	pass1(a);

	printf("One dimention array :\n");
	pass2(c);

	getch();
}

void pass2(int c[])
{
	int i;
	for(i=0;i<3;i++)
		printf("%5d",c[i]);
}

void pass1(int b[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",b[i][j]);
		puts("\n");
	}
}
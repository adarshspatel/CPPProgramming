//Written by Adarsh Patel

		//return back largest value
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	int a,b,c;
	float ratio(int,int,int);
	clrscr();

	printf("Enter the value of A, B, & C :");
	scanf("%d %d %d",&a,&b,&c);

	printf("The Answer is : %.2f",ratio(a,b,c));
	getch();
}

float ratio (int x, int y, int z)
{
	int difference(int,int);

	if(difference(y,z))
		return(float(x)/(y-z));
	else
		return(0.0);
}

int difference(int p, int q)
{
	if(p!=q)
		return(1);
	else
		return(0);
}
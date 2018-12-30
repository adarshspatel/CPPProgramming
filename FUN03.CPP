//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int a;
	float b,c;

	float add(int,float);
	int substraction(int,float);
	float div(int,int);
	void mul(float,int);

	printf("Enter the intiger value of A :");
	scanf("%d",&a);

	printf("Enter the float value of B :");
	scanf("%f",&b);

	c=add(a,b);

	printf("\naddition anwer is :  %.2f",c);
	c=substraction(a,b);
	printf("\nSubstraction answer is : %d",int(c));
	c=div(a,int(b));
	printf("\nDivision answer is : %.2f",c);
	mul(b,a);

	getch();
}

float add(int x,float y)
{
	return(x+y);
}

int substraction(int x,float y)
{
	return(x-y);
}

float div(int a,int b)
{
	return( float (a/b));
}

void mul(float x, int y)
{
	float temp;
	temp=x*y;
	printf("\nMultiplication is : %.2f",temp);
}



//Written by Adarsh Patel

// Binary to Decimal

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	clrscr();
	long int a,i=0,temp,digit;
	long float no,sum=0.0;

	printf("Enter the binary number :");
	scanf("%lf",&no);

	temp=int(no);

	while(temp>0)
	{
		digit=temp%10;
		sum=sum+(pow(2,i)*digit);
		temp=temp/10;
		i++;
	}
	no=no-int(no);
	digit=0;

	i=-1;

//	while(i>=-3)
	while(no>0)
	{
		no=no*10;
		digit=no;
		sum=sum+(pow(2,i)*digit);
		no=no-digit;
		i--;
	}

	printf("\n Decimal Number is : %lf",sum);
	getch();
}
//Written by Adarsh Patel
// Binary to Octal

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	clrscr();
	int a,i=0,j=0,digit,subdigit;
	long int temp;
	long float no,sum=0.0;
	char str[50]={NULL};

	printf("Enter the binary number :");
	scanf("%lf",&no);

	temp=no;

	while(temp>0)
	{
		digit=temp%1000;
		i=0;
		while(digit>0)
		{
			subdigit=digit%10;
			sum=sum+(pow(2,i)*subdigit);
			i++;
			digit=digit/10;
		}
		str[j++]=sum;
		sum=0.0;
		temp=temp/1000;
	}
	j--;

	do
	{
		printf("%d",str[j]);
		j--;

	}while(j>-1);

						//   Decimal Portion
	printf(".");
	no=no-int(no);
	digit=0;
	j=1;

	while(j<=5)
	{
		no=no*1000;
		digit=no;
		i=0;
		while(digit>0)
		{
			subdigit=digit%10;
			sum=sum+(pow(2,i)*subdigit);
			i++;
			digit=digit/10;
		}
		digit=sum;
		printf("%d",digit);
		sum=0.0;
		digit=no;
		no=no-digit;
		j++;
	}
	getch();
}
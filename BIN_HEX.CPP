//Written by Adarsh Patel
// Binary to Hexa decimal

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

void main()
{
	clrscr();
	int a,i=0,j=0,digit,subdigit;
	long int temp;
	long float no,sum=0.0;
	char str[50]={NULL};

				// user input

	printf("Enter the binary number :");
	scanf("%lf",&no);

				// find hexa and store to array
	temp=no;
	while(temp>0)
	{
		digit=temp%10000;
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
		temp=temp/10000;
	}

			// print to screen whatever store in array
	j--;
	do
	{
		if(str[j]>9)
			printf("%c",str[j]+55);
		else
			printf("%d",str[j]);
		j--;
	}while(j>-1);

				// Decimal Portion

	no = no - int(no);

	printf(".");
	digit=0;
	j=1;

	while(j<=2)
	{
		no=no*10000;
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

		if(digit>9)
			printf("%c",digit+55);
		else if(digit>9 && digit<16)
			printf("%d",digit);
		else
			printf("%d",0);

		sum=0.0;
		digit=no;
		no=no-digit;
		j++;
	}

	getch();

}
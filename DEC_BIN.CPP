//Written by Adarsh Patel

// Decimal to Hexa
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();
	int temp,i=0,j;
	int bin[10];
	float digit,no;

	printf("Enter Decimal Number : ");
	scanf("%f",&no);

	temp=abs(no);

	while(temp>0)
	{
		bin[i]=temp%2;
		i++;
		temp=temp/2;
	}

	i--;

	for(j=i;j>=0;j--)
		printf("%d",bin[j]);

	no=no-abs(no);

	if(no>0)
	{
		printf(".");

		for(j=1;j<=4;j++)
		{
			digit=no*2;
			printf("%d",abs(digit));
			no=no-abs(digit);
		}
	}

	getch();
}

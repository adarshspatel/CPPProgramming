//Written by Adarsh Patel

// Decimal to Hexa
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();
	int temp,i=0,j;
	int oct[10];
	float digit,no;

	printf("Enter Decimal Number : ");
	scanf("%f",&no);

	temp=abs(no);

	while(temp>0)
	{
		oct[i]=temp%8;
		i++;
		temp=temp/8;
	}

	i--;

	for(j=i;j>=0;j--)
	{
			printf("%d",oct[j]);

	}


	no=no-abs(no);

	if(no>0)
	{
		printf(".");

		for(j=1;j<=4;j++)
		{
			digit=no*8;
			printf("%d",abs(digit));
			no=no-abs(digit);
		}
	}

	getch();
}

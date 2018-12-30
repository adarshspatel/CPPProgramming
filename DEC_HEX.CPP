//Written by Adarsh Patel

// Decimal to Hexa
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();
	int temp,i=0,j;
	int hex[10];
	float digit,no;

	printf("Enter Decimal Number : ");
	scanf("%f",&no);

	temp=abs(no);

	while(temp>0)
	{
		hex[i]=temp%16;
		i++;
		temp=temp/16;
	}

	i--;

	for(j=i;j>=0;j--)
	{
		if(hex[j]>9)
			printf("%c",hex[j]+55);
		else
			printf("%d",hex[j]);
	}

	if(no=no-(int)no)
		printf(".");

	if(no>0)
	{
			no=no*16;
			temp=no;

			if(temp>9)
				printf("%c",temp+55);
			else
				printf("%d",temp);

			no=no-int(digit);

	}

	getch();
}

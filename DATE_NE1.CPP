//Written by Adarsh Patel

#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int d,m,y,month[]={31,28,31,30,31,30,31,31,30,31,30,31};

	printf("Enter the Date (DD-MM-YYYY) :");
	scanf("%d %d %d",&d,&m,&y);

	if(m==2 && d>=28)
	{
		if(y%4==0 && (y%100!=0 || y%400==0))
			month[m-1]=29;
	}

	if(d!=month[m-1])
		d=d+1;
	else if(m!=12)
	{
		if(d<month[m-1])
		d=d+1;
		else
		d=1;

		m=m+1;
	}
	else
	{
		d=1;
		m=1;
		y=y+1;
	}

	printf("\n The New Date is : %02d-%02d-%4d",d,m,y);

	getch();
}

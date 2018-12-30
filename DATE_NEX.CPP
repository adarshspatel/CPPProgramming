//Written by Adarsh Patel
//Find Next Date
//by Sir

#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int d,m,y,i,temp,sum=0,month[]={31,28,31,30,31,30,31,31,30,31,30,31};

	printf("Enter Date : (DD-MM-YYYY) :");
	scanf("%d %d %d",&d1,&m1,&y1);

	temp=d1;

	for(i=m1;i<m2+(y2-y1)*12;i++)
	{
		if(i>12)
		{
			i=1;
			y1++;
		}

		if(i==2)
		{
			if(y1%4==0 && (y1%100!=0 || y1%400==0))
				month[i-1]=29;
			else
				month[i-1]=28;
		}

		sum=sum+(month[i-1]-temp);
		temp=0;

		printf("Month = %d\t Days = %d\t Sum = %d\n",i,month[i-1],sum);

		if(i%12==0)
			getch();

	}

	sum=sum+d2-temp;

	printf("\n Total Number of Days are : %5d",sum);
	getch();
}

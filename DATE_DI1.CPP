//Written by Adarsh Patel
//Find Difference between Two Date
#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int d1,m1,y1,d2,m2,y2,month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day=0,tmonth=0,flag;

	printf("Enter Date 1 : (DD-MM-YYYY) :");
	scanf("%d %d %d",&d1,&m1,&y1);

	printf("Enter Date 2 : (DD-MM-YYYY) :");
	scanf("%d %d %d",&d2,&m2,&y2);

	flag=1;

	while(y1<=y2)
	{
		if(m1==m2 && y1==y2)
			day=day+(d2-d1);
		else
		{
			if(flag)
			{
				day=day+(month[m1-1]-d1);
				tmonth=m1+1;
				flag=0;
			}
			else
				tmonth=m1;

			while(tmonth<=m2 || tmonth!=13)
			{
				if(tmonth==2)
				{
					if(y1%4==0 && (y1%100!=0 || y1%400==0))
					month[1]=29;
					else
					month[1]=28;
				}
				if(d2<month[tmonth-1] && tmonth-1==m2-1)
					day=day+d2;
				else
				{
					day=day+month[tmonth-1];
//					printf("\n%d - %d = %d",tmonth,y1,month[tmonth-1]);
				}
				tmonth++;
			}
		}
			m1=1;
			y1++;
	}
	printf("\n The Difference of Date is : %7d",day);
	getch();
}

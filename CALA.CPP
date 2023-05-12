//	calendar design & develop by Chetan & Adarsh
//	calendar starts from 31-12-1899 to...................
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <dos.h>
void main()
{
	void credit();
	struct date dd;
	getdate(&dd);
	textbackground(35);
	textcolor(WHITE);
	clrscr();

	char day[][7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	char monthn[][20]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUN","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d1,m1,y1,d2=1,m2,y2,i;
	char ch=0;
	long int sum;

//	printf("");
//	printf("Enter Month : ");
	m2 = dd.da_mon;
//	scanf("%d",&m2);
/*	if(m2>12 || m2<1)
	{
		printf("\nError in Month.....");
		getch();
		return;
	}
*/
//	printf("Enter Year  : ");
//	scanf("%d",&y2);
	y2 = dd.da_year;
/*	if(y2<1900 || y2>3000)
	{
		printf("\nError in Year.....");
		getch();
		return;
	}
*/
	do
	{
		clrscr();
		printf("===============================================================================");
		printf("\n\t\t\t");
		textcolor(105);
		cprintf("CALENDAR OF YEAR 1900 - 3000");
		printf("\n\t\t");
		cprintf("    DESIGN & DEVELOPED BY CHETAN & ADARSH");
		textcolor(WHITE);
		printf("\n===============================================================================");
		printf("\n\t\t\t\t :  Hint   : ");
		printf("\n\t   Up Arrow    = Next Year,   Down Arrow  = Pre. Year \n\t   Right Arrow = Next Month,  Left Arrow  = Pre. Month \n\t\t\t\tEsc : Exit");
		printf("\n===============================================================================\n");
		sum=0;
		if(toascii(ch)==80)
		{
			y2 = y2 - 1;
		}
		if(toascii(ch)==72)
		{
			y2 = y2 + 1;
		}
		if(toascii(ch)==75)
		{
			if(m2==1)
			{
				m2=12;
				y2 = y2 - 1;
			}
			else
				m2 = m2 - 1;
		}

		if(toascii(ch)==77)
		{
			if(m2==12)
			{
				m2=1;
				y2 = y2 + 1;
			}
			else
				m2 = m2 + 1;

		}
		d1=31;m1=12;y1=1899;
		int temp=d1;
		for(i=m1;i<m2+(y2-y1)*12;i++)
			{
				if(i>12)
					{
						i=1;
						y1++;
					}
					if(y1%4==0 && (y1%100!=0 || y1%400==0) )
						month[1]=29;
					else
						month[1]=28;

				sum=sum+month[i-1]-temp;
				temp=0;
			}
		sum=sum+d2-temp;
		sum=sum%7;
		textcolor(105);
		cprintf("               MONTH : %-15s   YEAR : %4d",monthn[m2-1],y2);
		textcolor(WHITE);
		printf("\n===============================================================================\n");
		for(int d=0;d<7;d++)
			cprintf("%10s",day[d]);

		printf("\n\n");
		for(int z=0;z<sum;z++)
			printf("%10c",' ');

		for(int c=1;c<=month[m2-1];c++)
		{
			if(c==dd.da_day && m2==dd.da_mon && y2==dd.da_year)
			{
				textcolor(153);
				cprintf("%10d",c);
				textcolor(WHITE);
			}
			else
				printf("%10d",c);

			if((sum+c)%7==0)
				printf("\n");
		}
		ch = getch();
	}while(toascii(ch)!=27);
	credit();
	textbackground(BLACK);
	textcolor(WHITE);
	clrscr();
}

void credit()
{
   clrscr();
   char str1[]={"::----------: CREDIT :-----------::"};
   char str2[]={"::-----: Developed by :-----::"};
   char str3[]={"Mr.Adarsh Patel"};
   char str4[]={"::-----: Design & Graphics by :-----::"};
   char str5[]={"Mr.Chetan Parmar"};

   textcolor(14);
   textbackground(13);
   clrscr();
   for(int i=25;i>-10;i = i - 1)
   {
	   if(i==0)
		strcpy(str1,NULL);
	   if(i==-2)
		strcpy(str2,NULL);
	   if(i==-3)
		strcpy(str3,NULL);
	   if(i==-7)
		strcpy(str4,NULL);
	   if(i==-8)
		strcpy(str5,NULL);

	   if(i>0)
	   {
		   gotoxy(40-(strlen(str1)/2), i);
		   cprintf("%s",str1);
	   }

	   if(i<21)
	   {
		   gotoxy(40-(strlen(str2)/2),i+3);
		   cprintf("%s",str2);
	   }

	   if(i<19)
	   {
		   gotoxy(40-(strlen(str3)/2),i+4);
		   cprintf("%s",str3);
	   }

	   if(i<16)
	   {
		   gotoxy(40-(strlen(str4)/2),i+7);
		   cprintf("%s",str4);
	   }

	   if(i<14)
	   {
		   gotoxy(40-(strlen(str5)/2),i+8);
		   cprintf("%s",str5);
	   }
	   delay(500);
	   clrscr();
	}
}
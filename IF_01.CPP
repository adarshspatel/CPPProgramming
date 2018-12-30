//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float m1,m2,m3,m4,m5,m6,m7,result,total,percentage;

	printf("Enter Marks of All Subject (7 Subject) : \n");
	scanf("%f %f %f %f %f %f %f",&m1,&m2,&m3,&m4,&m5,&m6,&m7);

	total=m1+m2+m3+m4+m5+m6+m7;
	percentage=total/7.0;

	if(m1>=36 && m2>=36 && m3>=36 && m4>=36 && m5>=36 && m6>=36 && m7>=36)
	{
		printf("\nTotal   \t : %.2f",total);
		printf("\nResult\t\t : Pass");
		printf("\nPercentage \t : %.2f",percentage);
	}
	else
		printf("\nResult\t : Fail");

getch();
}

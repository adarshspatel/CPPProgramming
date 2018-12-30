//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>

struct marks			//structure define
{
	int mark1,mark2,total;
	float per;
};

void main()
{
	clrscr();
	int i,n;
	struct marks b[20];

	printf("How many structure of variable require ? ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Mark 1 of Student[%d] :",i);
		scanf("%d",&b[i].mark1);

		printf("Enter Mark 2 of Student[%d] :",i);
		scanf("%d",&b[i].mark2);

		b[i].total=b[i].mark1+b[i].mark2;
		b[i].per=b[i].total/2.0;
	}

	printf("Student         Mark1     Mark2    Total");
	for(i=0;i<n;i++)
	{
		printf("\nStudent[%d] ->  %3d  %3d  = %3d",i,b[i].mark1,b[i].mark2,b[i].total);
		printf("\nPercentage is : %.2f",b[i].per);
	}
	getch();
}


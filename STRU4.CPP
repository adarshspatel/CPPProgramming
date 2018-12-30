//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>

struct book
{
	char name[20];
	int amount;
	float discount,total;
};

void main()
{
	clrscr();
	struct book b[2],c;
	int i;
	struct book display(struct book);

	for(i=0;i<2;i++)
	{
		printf("Enter the Book Name :");
		fflush(stdin);
		gets(b[i].name);

		printf("Enter the Book Amount :");
		scanf("%d",&b[i].amount);
	}

	printf("\n\tName\t Amt     Dis   :   Total");
	for(i=0;i<2;i++)
	{
		c=display(b[i]);
		printf("\n %10s %8d %10.2f %10.2f",c.name,c.amount,c.discount,c.total);
	}
	getch();

}

struct book display(struct book z)
{
	z.discount = z.amount * 0.1;
	z.total = z.amount - z.discount;
	return(z);
}
//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,i,j,k;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(j=1,k=65;j<=i*2;j++)
		{
			printf("%3c",k);

			if(j==i)
				printf("%*c",1+((n-i)*3*2),' ');
			else if (j<=i)
				k++;
			else
				k--;
		}
		printf("\n");
	}
	getch();
}

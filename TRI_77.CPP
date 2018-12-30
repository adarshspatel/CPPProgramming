//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();

	int n,i,j,k,sign;
	char ch;

	printf("Enter Number of Rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%*c",(n-i)*2+1,' ');


		for(j=1;j<=i;j++)
		{
			if(i%2 && j%2)
				printf("%4c",65);
			else if(i%2)
				printf("%4c",66);
			else if(j%2)
				printf("%4c",66);
			else
				printf("%4c",65);

//				sign=sign*-1;
		}
		printf("\n");
	}

	getch();
}

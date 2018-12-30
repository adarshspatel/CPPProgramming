//Written by Adarsh Patel
// Recursion

#include <stdio.h>
#include <conio.h>
#include <string.h>


void main()
{
	clrscr();
	int n;
	long int ans;

	long int sum(int n);

	printf("Enter the value of n : ");
	scanf("%d",&n);

	ans=sum(n);

	printf("\n Factorial is : %ld",ans);
	getch();

}
long int sum(int m)
{
	long int total;

	if(m==1)
		return(1);
	else
	{
		total = m + sum(m-1);
		printf("%5ld",total);
	}
	return(total);
}
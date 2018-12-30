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

	long int factorial(int n);

	printf("Enter the value of n : ");
	scanf("%d",&n);

	ans=factorial(n);

	printf("\n Factorial is : %ld",ans);
	getch();
}
long int factorial(int n)
{
	long int fact;

	if(n==1)
		return(1);
	else
	{
		fact = n * factorial(n-1);
		printf("%5ld",fact);
	}
	return(fact);
}
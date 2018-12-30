//Written by Adarsh Patel
// Recursion

#include <stdio.h>
#include <conio.h>
#include <string.h>

int i=0;

void main()
{

//    static int i=0;

	printf("\nI value is : %5d",i++);

	if(i<5)
		main();

	printf("\nRam %5d \t",i);

}



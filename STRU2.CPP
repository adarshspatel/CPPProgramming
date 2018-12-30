//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student			//structure define
{
	int stud_no;
	char stud_name[20];
	float int_mark,ext_mark;
};

void main()
{
	struct student std1={100,"Rambhai",30.50,60.25},std2,std3;
	clrscr();

	std3.stud_no=std1.stud_no;

	strcpy(std3.stud_name, std1.stud_name);

	printf("\n Only Student No & Name are printed to structure student : ");
	printf("\n %6d %20s",std3.stud_no,std3.stud_name);

	std2=std1;

	printf("\n\nStudent 1 & student 2 are same :");
	printf("\n%5d %20s %8.2f %8.2f",std2.stud_no,std2.stud_name,std2.int_mark,std2.ext_mark);

	printf("\n\nThe size of the name is : %d",strlen(std3.stud_name));

	if(strcmp(std2.stud_name,std1.stud_name)==0)
		printf("\nBoth Name are same ");

	getch();
}

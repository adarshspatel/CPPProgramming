//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>

float max_float(float x, float y)
{
	if(x>y)
		return x;
	else
		return y;

}
void main()
{
	clrscr();
	//	float max_float(float,float)

	int max_min_char(char,char);
	float a,b,c;

	printf("Enter Two float Value : ");
	scanf("%f%f",&a,&b);

	c=max_float(a,b);

	printf("Maximum float value is : %.2f",c);

	c=max_float(int(a),int(b));

	printf("Maximum float value is : %.2f",c);

	char ch1,ch2;
	int flag;
	ch1='k';
	ch2='&';

	flag=max_min_char(ch1,ch2);

	if(flag)
		printf("\n Character %c is grater than %c",ch1,ch2);
	else
		printf("\n Character %c is less than %c",ch1,ch2);

	getch();
}
int max_min_char(char x,char y)
{
	if(x>y)
		return 1;
	else
		return 0;
}

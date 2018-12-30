//Written by Adarsh Patel


#include <stdio.h>
#include <conio.h>
struct rate
{
	char name[20];
	int basic;
	float da,hra;
};

void main()
{
	clrscr();
	struct rate b={"Rambhai",7000,40.5,10.5};
	float d_incre,h_incre,value;
	struct rate update1(struct rate,float,float);
	void display(struct rate);
	float mul(struct rate);

	printf("The actual values are as follows ");
	printf("%15s %6d %8.2f %8.2f \n",b.name,b.basic,b.da,b.hra);

	printf("Enter encyment value of DA :");
	scanf("%f",&d_incre);

	printf("Enter encyment value of HRA :");
	scanf("%f",&h_incre);

	b=update1(b,d_incre,h_incre);
	display(b);
	value = mul(b);
	printf("total salary = %.2f",value);

}

struct rate update1(struct rate cal, float p, float q)
{
	cal.da += p;
	cal.hra += q;
	return(cal);
}

void display(struct rate cal)
{
	printf("update values are as follows ");
	printf("\n Name  HRA DA \n");
	printf("%15s %8.2f %8.2f",cal.name,cal.da,cal.hra);
}

float mul(struct rate cal)
{
	return(cal.basic + (cal.basic*cal.da)/100.00 + (cal.basic * cal.hra)/100.00);
}
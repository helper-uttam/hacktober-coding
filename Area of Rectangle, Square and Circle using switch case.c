#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
void area_of_rectangle(void);
void area_of_square(void);
void area_of_circle(void);
void main()
{
	int ch;
	while(1)
	{
		printf("1.Area of Rectangle\n");
		printf("2.Area of Square\n");
		printf("3.Area of Circle\n");
		printf("4.Quit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: area_of_rectangle();
					break;
			case 2: area_of_square();
					break;
			case 3: area_of_circle();
					break;
			case 4: exit(1);
					break;
			default: printf("Enter choice is invalid!\n\n");
		}
	}
}
void area_of_rectangle()
{
	float l , b , a;
	printf("Enter length of the Rectangle: ");
	scanf("%f",&l);
	printf("Enter breadth of the Rectangle: ");
	scanf("%f",&b);
	a = l * b;
	printf("Area of the Rectangle is : %f\n\n",a);
	
}
void area_of_square()
{
	float l , a;
	printf("Enter the length of one side of Square: ");
	scanf("%f",&l);
	a = l * l;
	printf("Area of the Square is : %f\n\n",a);
}
void area_of_circle()
{
	float r , a;
	printf("Enter the radius of the Circle: ");
	scanf("%f",&r);
	a = pi * r * r;
	printf("Area of the Circle is : %f\n\n",a);
}

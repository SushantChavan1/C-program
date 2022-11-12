#include<stdio.h>
#include<conio.h>
void AOR();//declaration
void AOT();//declaration
void AOS();//function declaration
void AOC();//function declaration
void COC();//function declaration 

void AOR()//defination

{
float length,breadth,AOR;
 printf("Area of rectangle\n");
printf("enter the value of length & breadth=");
scanf("%f,%f",&length,&breadth);
AOR=length*breadth;
printf("The area of rectangle=%f\n",AOR);
}

void AOT()//defination

{
float base,height,AOT;
printf("Area of triangle\n");
printf("enter the value of base & height=");
scanf("%f,%f",&base,&height);
AOT=0.5*base*height;
printf("The area of triangle=%f\n",AOT);
}

void AOS()//defination

{float side,AOS;
printf("Area of square\n");
printf("enter the value of side=");
scanf("%f",&side);
AOS=side*side;
printf("The area of square=%f\n",AOS);
}

void AOC()//defination

{float radius,pi,AOC;
printf("Area of circle\n");
printf("enter the value of radius=");
scanf("%f",&radius);
pi=3.14;
AOC=pi*radius*radius;

printf("The area of circle=%f\n",AOC);
}

void COC()//defination

{float radius,pi,COC;
printf("Circumference of circle\n");
printf("enter the value of radius=");
scanf("%f",&radius);
pi=3.14;
COC=2*pi*radius;

printf("The circumference of circle=%f",COC);
}

void main() 
{
clrscr();

AOR(); //function call
AOT(); //function call
AOS(); //function call
AOC(); //function call 
COC(); //function call 
getch();
}
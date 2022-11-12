#include<stdio.h>
#include<conio.h>
void add();//declaration
void sub();//declaration
void multi();//function declaration
void div();//function declaration

void add()//defination

{
int a,b,c;
 printf("addition\n");
printf("enter the value of a & b=");
scanf("%d,%d",&a,&b);
c=a+b;
printf("the addition=%d\n",c);
}

void sub()//defination

{int a,b,c;
printf("substraction\n");
printf("enter the value of a & b=");
scanf("%d,%d",&a,&b);
c=a-b;
printf("the substraction=%d\n",c);
}

void multi()//defination

{int a,b,c;
printf("multiplication\n");
printf("enter the value of a & b=");
scanf("%d,%d",&a,&b);
c=a*b;
printf("the multiplication=%d\n",c);
}

void div()//defination

{int a,b,c;
printf("division\n");
printf("enter the value of a & b=");
scanf("%d,%d",&a,&b);
c=a/b;
printf("the division=%d\n",c);
}



void main() 
{
clrscr();
add();//function 
sub();//function 
multi();
div();
getch();
}
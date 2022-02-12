#include<stdio.h>
int main()
{
 float a,b;
int op;
printf("enter two numbers");
scanf("%f%f",&a,&b);
printf("1.Addition \n");   
printf("2.Subtraction \n"); 
printf("3.Multiplication \n"); 
printf("4.Division \n");
switch(op)
{
    case 1:
printf("sum of %f and %f is: %f",&a,&b,a+b);
break;
case 2:
printf("subtraction of %f and %f is: %f",&a,&b,a-b);
break;
case 3:
printf("multiplication of %f and %f is: %f",&a,&b,a*b);
break;
case 4:
printf("division of %f and %f is: %f",&a,&b,a/b);
break; 
default:
printf("choose correctly");
}
return 0;
}
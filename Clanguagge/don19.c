#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
 float l, b, r , P, A , C;
 printf("enter the value of length , breadth and height\n");
 scanf("%f %f %f", &l, &b, &r);
P = 2*( l +b);
printf("the perimetre of the rectangle is %f\n", P);
A = 3.14*r*r;
printf("the area of the circle is %f\n", A);
C = 2*3.14*r;
printf("the circumference of the circle is %f\n", C);

    return 0;
}

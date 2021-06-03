#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float x, y, r, theta ;
    /*x and y are coordinates*/
    /*conversion of coordinate into r and theta*/
    printf("enter the value of x and y\n");
    scanf("%f%f",&x, &y);
    r = sqrt(x*x)+(y*y);
    theta = atan(y/x);  /*atan defines tan inverse*/
    theta = theta*180/3.14;/*conversin of theta in degree from lradian*/
    printf("the polar form is r = %f and theta = %f", r, theta);
    return 0;
}

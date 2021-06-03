#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float t, a, b, c ,d, e, f;  /*t = theta in degree*/
   t = t*3.14/180;
    printf("enter the value of theta\n");
    scanf("%f", &t);
    a = sin(t);
    b = cos(t);
    c = tan(t);
    d = 1/tan(t);
    e  = 1/cos(t);
    f = 1/sin(t);
    printf("the value of trigonometric function is sin = %f\n cos = %f\n tan = %f\n cot = %f\n sec = %f\n cosec = %f\n", a, b, c,d,e,f);

    return 0;
}

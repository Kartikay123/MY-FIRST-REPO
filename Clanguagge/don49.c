#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float p, x,y;
    printf("enter the value of x,y\n");
    scanf("%f%f", &x , &y);
    p = pow(y, x);
    printf("%f is the value of power raised one above other\n", p);
    return 0;
}

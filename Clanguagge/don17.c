#include<stdio.h>
int main(int argc, char const *argv[])
{
int p, t;
float si, r;
printf("enter the value of p, t,  r\n ");
scanf("%d %d %f",  &p, &t,  &r);
/*formula*/
si=p*t*r/100;
printf("%f\n", si);

    return 0;
}

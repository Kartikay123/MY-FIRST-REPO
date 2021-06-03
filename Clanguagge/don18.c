#include<stdio.h>
int main(int argc, char const *argv[])
{
    float F, C;
    printf("enter the temperature in fahrenheit\n");
    scanf("%f", &F);
    /*formula of conversion*/
       C = 5/9* (F- 32);
printf("the result in celsius is %f", C);



    return 0;
}

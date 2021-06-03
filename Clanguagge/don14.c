#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b = 1 ;
    printf("enter the number whose table you wants\n");
    scanf("%d", &a);
    printf("Table of %d is\n ", a);
    do
    {
        printf("%d x %d = %d\n ", a,b , a*b);
        b = b +1;
    } while (b<= 10);
    
 return 0;
}


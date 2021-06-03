#include<stdio.h>
int main(int argc, char const *argv[])
{
   /*the sum of five digit number that is entered*/
   int num, a, b , c , d, e, sum;
   printf("entered the five digit number\n");
   scanf("%d", &num);
   a = num%10; /*last digit I will get*/
    num = num/10; /*remaining numbers*/
   b = num%10; /*last second digit I will get*/
    num = num/10; /*remaining numbers*/
   c = num%10; /*last  third digit I will get*/
    num = num/10; /*remaining numbers*/
   d= num%10; /*last fourth digit I will get*/
    num = num/10; /*remaining numbers*/
   e = num%10; /*last digit I will get*/
   sum = a+b+c+d+e;
   printf("%d", sum);
    return 0;
}

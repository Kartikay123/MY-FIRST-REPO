#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num, i, fact;
    printf("enter the number\n");
    scanf("%d", &num);
    fact = i = 1;
    while (i<=num)
    {
        fact  = fact*i;
        i++;


    }
    printf("factorial value = %d", fact);

    
    

    return 0;
}

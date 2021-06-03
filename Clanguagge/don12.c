#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, num = 2;
    printf("enter the age\n");
    scanf("%d", &age);

    do
    {
        printf("%d\n", num);
        num = num + 5;

    } while (num <= age);

    return 0;
}

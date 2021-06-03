#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a, b, e;
    printf("enter the number at location C\n");
    scanf("%d",&a);
    printf("enter the number at location D\n");
    scanf("%d",&b);
    e = a;
    a = b;
    b = e;
    printf("new number at location C is %d\n", a);
    printf("new nummber at location D is %d\n",b );
    return 0;
}

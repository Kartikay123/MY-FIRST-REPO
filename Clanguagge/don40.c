#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num, a, b, c ,d ,e;
    
    printf("enter the number\n");           /*five digit number*/
    scanf("%d", &num);
    a = num%10;
    num = num/10;
    b = num%10;
     num = num/10;
    c = num%10;
     num = num/10;
    d = num%10;
     num = num/10;
    e = num%10;
     num = num/10;
     res = a*10000 +b*1000 + c*100 + d*10 + e;
     printf("the five digit number reverse is %d\n", res);

    if (num==res)
    {
         printf("both the number are equal bro\n");     
    }
    else
    {
         printf("both the number are not  equal bhai\n");
    }
    
        return 0;
}

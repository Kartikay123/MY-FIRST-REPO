#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
  
    char a;
    int y;
    scanf("%c", &a);
    y = (a>=65 && a<=90?1:0);
    printf("%d",y);
    return 0;
}

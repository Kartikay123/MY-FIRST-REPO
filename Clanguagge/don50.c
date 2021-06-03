#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x = 4, y,z,k;
    y = --x;
    z = x--;
   
    printf("%d %d %d ", x,y,z);
    return 0;
}

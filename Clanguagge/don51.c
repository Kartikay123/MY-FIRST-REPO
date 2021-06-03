#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
   int i,j;
   i = 6;       /* i++ me phle assign hoga lhs se phir increment hoga*/
   /*++i me phle increment hoga phir assign hoga lhs se*/
   j = i++;
   printf("%d", j);
    
    return 0;
}

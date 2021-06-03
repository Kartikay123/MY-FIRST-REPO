#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
     int q, dis; /*q = quantity and tot = total amount*/
    float tot, ppi;     /*dis = discount , ppi = priceper item*/
    printf("enter the value of q and ppi\n");
    scanf("%d%f", &q,&ppi);
    if (q>1000) 
    {
        dis = 10;
        tot = (q*ppi) - (q*ppi*dis/100);
        printf("%f is the total", tot);
    }
    else
    {
        dis = 0;
        tot = (q*ppi);
        printf("%f is the value of total", tot);
    }
    
    
    return 0;
}

   
    
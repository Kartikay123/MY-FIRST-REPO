#include<stdio.h>
int main(int argc, char const *argv[])
{
    int amo, nohun, nofif, total;
    printf("enter the amount\n");
    scanf("%d",&amo);
    nohun = amo/100;
    amo = amo%100;
    nofif = amo/50;
    total = nohun + nofif;
    printf("smallest number of notes= %d\n", total);
    return 0;
}

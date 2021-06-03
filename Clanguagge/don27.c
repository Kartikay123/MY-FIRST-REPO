#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float L1, L2, G1,G2, D;
    /*l belongs to latitude value and G belongs to longiiitude*/
    printf("the latitudes values are L1, L2\n");     /*degree*/
    scanf("%f%f", &L1, &L2);
    printf("the values of longitude G1, G2\n"); /*degree*/
    scanf("%f%f",&G1, &G2);
    L1 = L1*3.14/180;
    L2 = L2*3.14/180;   /*radian*/
    G1 = G1*3.14/180;
    G2 = G2*3.14/180;
    D = 3963*acos(sin(L1)*sin(L2)+ cos(L1)*cos(G2-G1));
    printf("the distance in nautical miles D = %f", D);

    return 0;
}

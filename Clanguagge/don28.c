#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float wcf, v, t;    /*wcf is wind chill factor, v is wind velocity, t is air temperature*/
    
    {
        printf("enter the value of v and t\n");
        scanf("%f%f", &v,&t);
        wcf = (35.74+ 0.6215*t) + (0.4275*t - 35.75)*pow(v,0.16);
        printf("%f is the value of wind chill factor", wcf);
    }
    
    return 0;
}

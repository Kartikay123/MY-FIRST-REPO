#include<stdio.h>
int main() {
int a , b;
printf("kya tumhe hagne me pareshani hai if yes reply with 1\n");
scanf("%d" , &a);
switch (a)
{
case 1:
printf ("tatti nahi ho rahi tumse\n");
printf("samasya ke samadhan ke liye 1 dabao\n");
scanf ("%d" , &b);
switch (b)
{
case /* constant-expression */1:
printf("jamal ghota kha sab sahi ho jaega");
    /* code */
    break;

default:
printf("mar jaa sale bavasir se ");
    break;
}
break;
default:
printf("matlab tumhara hajma sahi hai\n");
printf("isi bat par hag lo jaake\n");
    break;
}



    return 0;
}

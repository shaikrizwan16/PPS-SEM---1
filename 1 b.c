#include<stdio.h>
void main ()
{
    int n,i,rem,arm;
    arm=0;
    printf("enter number");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==n)
        printf ("given number is armstorng");
    else
        printf("given number is not armstorng");
}

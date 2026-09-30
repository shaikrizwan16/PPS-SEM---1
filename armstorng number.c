#include<stdio.h>
void main ()
{
    int n,i,rem,arm,temp;
    arm=0;
    printf("enter number");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==temp)
        printf ("given number is armstorng");
    else
        printf("given number is not armstorng");
}

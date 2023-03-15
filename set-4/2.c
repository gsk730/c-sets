#include<stdio.h>
void main()
{
    int a,sum=0;
    scanf("%d",&a);
    while(a>9)
    {
        int rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("%d",sum);
}
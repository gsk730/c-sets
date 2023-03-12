#include<stdio.h>
int reverse(int a)
{   int x=0;
    while(a>0)
    {
        int rem=a%10;
        x=x*10+rem;
        a=a/10;
    }
    return x;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=reverse(a);
    printf("%d",b);
    return 0;
}
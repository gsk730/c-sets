#include<stdio.h>
int bigger(int a ,int b)
{
    if(a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
void main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c =bigger(a,b);
    printf("%d",c);
}
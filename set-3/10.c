#include<stdio.h>
void main()
{
    int a,b,n=0;
    scanf("%d %d",&a,&b);
    while(n<50)
    {
        n=a+b;
        a=b;
        b=n;
        printf("%d",n);
    }
   
}
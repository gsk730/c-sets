#include<stdio.h>
#include<math.h>
void main()
{
    int a,b=0;
    scanf("%d",&a);
    while (a>0)
    {
        int rem=a%10;
        b=b+(int)pow(rem,3);
        a=a/10;
    }
    printf("%d",b);
}
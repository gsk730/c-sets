#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a^=b;
    b^=a;
    a^=b;
    printf("%d\n %d\n",a,b);
}
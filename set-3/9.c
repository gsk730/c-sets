#include<stdio.h>
#include<math.h>
void main()
{
    int p,n,a,b;
    float r,t;
    scanf("%d %f %f %d", &p,&t,&r,&n);
    b=(int)pow(1+r/n,n*t);
    a=p*b;
    printf("%d\n",a);
    printf("%d",b );
}
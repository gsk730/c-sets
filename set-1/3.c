#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r,n;
    int a;
    scanf("%d\n %d\n %d\n %d",&p,&t,&r,&n);
    a=p*(pow((1+r%n),n*t));
    printf("%d",a);
    return 0;
}
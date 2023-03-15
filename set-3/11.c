#include<stdio.h>
void main()
{
    int n,r,res1=1,res2=1,res3=1,c;
    scanf("%d %d",&n,&r);
    for(int i=n;i>1;i--)
    {
        res1=res1*i;
    }
    for(int i=r;i>1;i--)
    {
        res2=res2*i;
    }
    for(int i=(n-r);i>1;i--)
    {
        res3=res3*i;
    }
    c=(int)res1/(res2*res3);
    printf("%d",c);
}
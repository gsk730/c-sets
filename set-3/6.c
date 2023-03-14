#include<stdio.h>
void main()
{
    int a,res=1;
    scanf("%d",&a);
    while(a>0)
    {  
       res=res*a;
       a=a-1;
    }
    printf("%d",res);
}
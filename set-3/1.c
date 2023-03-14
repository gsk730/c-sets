#include<stdio.h>
void main()
{
    int start,end,sum=0;
    scanf("%d",&start);
    scanf("%d",&end);
    for(int i=start;i<=end;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
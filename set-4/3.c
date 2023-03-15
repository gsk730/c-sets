#include<stdio.h>
void main()
{
    int start,end,count=0;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        if(i%4==0 && i%100!=0)
        {
            count++;
        }
        else if(i%100==0 && i%400==0)
        {
            count++;
        }
        else
        {
            count;
        }
        
    }
    printf("%d",count);
}
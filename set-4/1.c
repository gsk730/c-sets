#include<stdio.h>
void main()
{
    int start,end,count=0,i, flag=0;
    scanf("%d %d",&start,&end);
    for ( i=start;i<=end;i++)
    {
        for(int j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            flag=0;
        }
        if (flag==0)
        {
            count++;
        }
    }
    printf("%d",count);
}
#include<stdio.h>
void main()
{
    int n1,n2,rem=0;
    scanf("%d %d", &n1,&n2);
    while(n1>0 && n2>0 )
    {
        rem=n1%n2;
        if(rem==0)
        {
            break;
        }
        n1=n2;
        n2=rem;

    }
    printf("%d",n2);
}
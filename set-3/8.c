#include<stdio.h>
void main()
{
    int a,flag=0;
    scanf("%d",&a);
    for(int i=2;i<a/2;i++)
    {
        if (a%i==0)
        {
            flag=1;
        }
        
    }
    if(flag==1)
    {
        printf("composite number");
    }
    else{
        printf("prime number");
    }
}
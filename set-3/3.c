#include<stdio.h>
void main()
{
    int a,b,rev=0;
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
    if(b==rev)
    {
        printf("palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
}
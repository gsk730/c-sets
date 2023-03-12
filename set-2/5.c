#include<stdio.h>
void main()
{
    int yy;
    scanf("%d",&yy);
    if(yy%4==0 && yy%100!=0)
    {
        printf("Yes");
    }
    else if(yy%100==0 && yy%400==0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}
#include<stdio.h>
float ft(float tf)
{
    float tc=(tf-32)*5/9;
    return tc;
}
float ct(float tc)
{
    float tf=tc*9/5+32;
    return tf;
}
int main()
{
    float tc,tf,res;
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
        printf("Enter the celsius temperature");
        scanf("%f",&tc);
        res=ct(tc);
        printf("%.2f",res);
        break;
    
     case 2:
        printf("Enter the farenheit temperature");
        scanf("%f",&tf);
        res=ft(tf);
        printf("%.2f",res);
        break;

     default :
       printf("Enter correct input");
       break;
    }
    return 0;
}
#include<stdio.h>
void main()
{
    int a,b,res;
    char ch;
    scanf("%d %d",&a,&b);
    scanf("%c",&ch);
    switch(ch)
    {
        case 1:
        case A:
        case +:
        {
            res=a+b;
            printf("%d",res);
        }
        break;
        case '2':
        case 'S':
        case '-':
        {
            res=a-b;
            printf("%d",res);
        }
        break;

        case '3':
        case 'M':
        case '*':
        {
            res=a*b;
            printf("%d",res);
        }
        break;
        case '4':
        case 'D':
        case '/':
        {
            res=a/b;
            printf("%d",res);
        }
        break;
        case '5':
        case 'R':
        case '%':
        {
            res=a%b;
            printf("%d",res);
        }
        break;
        
    }
}
#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,det,root1,root2;
  scanf("%d %d %d", &a,&b,&c);
  det=(int)pow(b,2)-(4*a*c);
  if(det>0)
  {
     root1= (-b+(int)sqrt(det))/(2*a);
     root2= (-b-(int)sqrt(det))/(2*a);
     printf("%d\n%d",root1,root2);
  }
  else if(det==0)
  {
    root1=(-b+(int)sqrt(det))/(2*a);
    printf("%d\n%d",root1,root1);
  }
  else
  {
    printf("Imaginary roots");
  }
}
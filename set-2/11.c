#include<stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(a=='a'|| a=='A' || a=='e'|| a=='E' || a=='i'|| a=='I'||a=='o'|| a=='O'||a=='u'|| a=='U')
    {
        printf("Vowel");
    }
    else if (a=='b'|| a=='B' || a=='c'|| a=='C' || a=='d'|| a=='D'||a=='f'|| a=='F'||a=='g'|| a=='G'|| a=='h'|| a=='H' || a=='j'|| a=='J' || a=='k'|| a=='K'||a=='l'|| a=='L'||a=='m'|| a=='M'||a=='n'|| a=='N' || a=='p'|| a=='P' || a=='q'|| a=='Q'||a=='r'|| a=='R'||a=='s'|| a=='S'
   || a=='t'|| a=='T' || a=='v'|| a=='V' || a=='x'|| a=='X'||a=='y'|| a=='Y'||a=='z'|| a=='Z')
    {
        printf("Consonant");
    }
    else
    {
        printf("Non-Alphabet");
    }
}
#include <stdio.h>

int p[8][8]={2,3,4,4,4,4,3,2,
             3,4,6,6,6,6,4,3,
             4,6,8,8,8,8,6,4,
             4,6,8,8,8,8,6,4,
             4,6,8,8,8,8,6,4,
             4,6,8,8,8,8,6,4,
             3,4,6,6,6,6,4,3,
             2,3,4,4,4,4,3,2};
void main(void)
{
    int N,i;
    int il,id;
    scanf("%d\n",&N);
    
    for(i=0;i<N;i++)
    {
        char letter,digit;
        scanf("%c%c\n",&letter,&digit);
        il=letter-'a'+1;
        id=digit-'0';
        printf("%d\n",p[il-1][id-1]);
    }
}

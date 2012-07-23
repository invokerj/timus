#include <stdio.h>

int main()
{
    char str[50];
    int maxi,max,i=0;
    int ch[26]={0};

    scanf("%s",&str);
    while(str[i++]) ch[str[i]-'a']++;

    maxi=0;
    max=ch[maxi];

    for(i=1;i<26;i++)
    {
        if(ch[i]>max)
        {
            maxi=i;
            max=ch[maxi];
        }
    }
    printf("%c\n",maxi+'a');
    return 0;
}

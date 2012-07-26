//CALL: res=kmp(str,pat); p=sizeof(pat);
//
#include <stdio.h>
#include <string.h>

#define maxn 250001

char s[maxn] ;
char t[2*maxn];

int fail[maxn];

int kmp (char *str, char *pat) {
	int i, j, k;
	memset(fail, -1, sizeof (fail));
	for (i=1;pat[i];++i) {
		for (k=fail[i-1];k>=0 && pat[i] != pat[k+1]; k=fail[k]);
		if (pat[k+1] == pat[i]) fail[i]=k+1;
	}
	
	i = j = 0;
	while (str[i] && pat[j]) {
		if (str[i]==pat[j]) ++i, ++j;
		else if (j==0) ++i;
		else j = fail[j-1]+1;
	}
	if (pat[j]) return -1;
	else return i-j;
}

int main (void )
{
	int i, n, l;
	scanf ("%d", &n);
	scanf ("%s", s);
	scanf ("%s", t);
	for (i=0;i<n;i++) t[i+n]=t[i];
	t[2*n]='\0';
	l = kmp (t, s);
	printf ("%d\n", l);
	return 0;
}

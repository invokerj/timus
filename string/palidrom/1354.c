#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

char s[10001];

int main (void)
{
	int i,j,ll,valid,len;
	memset(s,0,sizeof(s));
	scanf ("%s", s);
	len = strlen (s);
	if (len == 0)
		printf ("a\n");
	else if (len == 1) {
		printf ("%s%s\n",s,s);
	}
	for (i=1;i<len;i++) {
		valid = true;
		for (j=0;(j<(len-i))&&valid;j++)
			if (s[i+j]!=s[len-1-j])
				valid = false;
		if (valid) {
			printf ("%s",s);
			for (j=i-1;j>=0;j--)
				printf ("%c",s[j]);
			printf ("\n");
			break;
		}
	}
//	printf ("%s",s);
	return 0;
}

#include <stdio.h>
#include <string.h>

char str[200001];
char stack[200001];
int len;

int main (void)
{
	int i,k,p;
	scanf ("%s",str);
	len = strlen (str);
	p=0;
	for (i=0;i<len;i++) {
		stack[p]=str[i];
		p++;
		if ((p-1)>=0) {
			if (stack[p-1]==stack[p-2]) p=p-2;
		}
	}
	stack[p]='\0';

	printf ("%s\n", stack);
	return 0;
}

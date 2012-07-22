#include <stdio.h>

int main (void)
{
	int n;
	while (scanf ("%d", &n) != EOF)
	{
		if (n<=0) {
			printf ("%d\n",(1-n+1)*(1+n)/2);
		}
		else
			printf ("%d\n",(1+n)*n/2);
	}
	return 0;
}

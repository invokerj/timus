#include <stdio.h>

int main (void)
{
	int n,a,b;
	while (scanf ("%d %d %d",&n,&a,&b) != EOF)
		printf ("%d\n", n*a*b*2);
	return 0;
}

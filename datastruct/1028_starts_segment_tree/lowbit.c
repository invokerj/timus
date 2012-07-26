#include <stdio.h>

int lowbit (int x)
{
	return x&(-x);
}

int main (void)
{
	int i,n;
	scanf ("%d",&n);

	for (i=0;i<n;i++)
		printf ("%d lowbit is %d\n",i,lowbit(i));

	return 0;
}

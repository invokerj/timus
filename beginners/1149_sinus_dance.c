#include <stdio.h>

#define false 0

void An (int n, int k, int flag)
{
	if (n==0) return;
	printf("sin(%d",k);
	if (n>1) {
		if (flag) printf("+");
		else printf ("-");
	}
	An (n-1, k+1, !flag);
	printf (")");

}

void Sn (int n, int k)
{
	if (n==0) return;
	if (n>1) {
		printf("(");
		Sn(n-1,k+1);
		printf(")");
	}
	An(n,1,false);
	printf("+%d",k);
}

int main (void)
{
	int n;
	scanf ("%d",&n);
	Sn (n,1);
	return 0;
}

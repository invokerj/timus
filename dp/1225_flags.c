#include <stdio.h>
#define maxn 50

long long int fab[maxn];

int main (void)
{
	int i,n;
	scanf ("%d", &n);
	fab[1]=1;
	fab[2]=1;
	if (n>2) {
		for (i=3;i<=n;i++) {
			fab[i]=fab[i-1]+fab[i-2];
		}
	}
	printf ("%lld\n",2*fab[n]);
	return 0;


}

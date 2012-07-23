// AC 0.218s 1296k
#include <stdio.h>

#define maxn 150000

int id[maxn];
int m[maxn];

int main (void )
{
	int n,i,t, k;
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
		scanf ("%d %d", &id[i], &m[i]);
	}
	
	for (k=100;k>=0;k--) {
		for (i=0;i<n;i++) {
			if (k==m[i]) {
				printf ("%d %d\n",id[i],m[i]);
			}
		}
	}

	return 0;


}

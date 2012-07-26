// problem: when m=0; infinite loop.
#include <stdio.h>

#define maxn 150000

unsigned long int id_m[maxn];

int main (void)
{
	unsigned long int id;
	unsigned int i, t, n ;
	int m;
	scanf ("%d", &n);
	for (i=0;i<n;i++) {
		scanf ("%ld %d", &id, &m);
		id_m[i]=(id<<7)+m;
	}

	

	for (m=100;m>=0;m--) {
		for (i=0;i<n;i++) {
			t = id_m[i] %128;
			if (m==t) {
				id = (id_m[i] >>7);
				printf ("%ld %d\n",id, t);
			}
		}
	}

	return 0;
}

#include <stdio.h>

int main (void)
{
	int i,n,max;
	int *seq;

	while (scanf ("%d",&n) && n ) {
		max=1;
		seq = (int *)malloc((n+2)*sizeof(int));
		seq[0]=0;seq[1]=1;
		for (i=2;i<=n;i++) {
			if (i%2==0) seq[i]=seq[i/2];
			else seq[i]=seq[i/2]+seq[i/2+1];

			if (seq[i]>max) max=seq[i];
		}
		printf ("%d\n",max);
		free(seq);
	}
	return 0;
}

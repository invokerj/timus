//time out
#include <stdio.h>

int main (void )
{
	int i,k,n,count;
	int *x, *y, *level;

	scanf ("%d",&n);

	x = (int *)malloc((n+1)*sizeof(int));
	y = (int *)malloc((n+1)*sizeof(int));
	level = (int *)malloc((n+1)*sizeof(int));

	memset(level, 0, n*sizeof(int));
	
	for (i=0;i<n;i++) {
		scanf ("%d %d", &x[i], &y[i]);
		for (k=0;k<i;k++) {
			if (i==0) break;
			if (y[k]==y[i]) {
				if (x[k]<x[i]) level[i]++;
				else if (x[k]==x[i]) {
				}
				else level[k]++;
			}
			else {
				if (x[k]<=x[i]) level[i]++;
			}
		}
	}

	for (i=0;i<n;i++) {
		count=0;	
		for (k=0;k<n;k++)
			if (level[k]==i) 
				count++;
		printf ("%d\n", count);
	}
	free(x);
	free(y);
	free(level);

	return 0;
}

/* time out */
#include <stdio.h>
#include <stdlib.h>

#define maxn 150000

int id[maxn];
int m[maxn];
int mclone[maxn];
int use[maxn];

int cmp (const void *a, const void *b)
{
	return *(int *)b-*(int *)a;
}

int main (void)
{
	int i, n, k;
	scanf ("%d", &n);
	for (i=0;i<n;i++) 
		scanf ("%d %d", &id[i], &m[i]);
	for (i=0;i<n;i++){ mclone[i]=m[i]; use[i]=0;}

	qsort (mclone, n, sizeof(int), cmp);

//	for (i=0;i<n;i++) printf ("After sort, mclone[%d]=%d\n",i, mclone[i]);

	for (i=0;i<n;i++) {
		for (k=0;k<n;k++) {
			if (m[k]==mclone[i] && !use[k]) {
				printf ("%d ", id[k]);
				use[k]=1;
				break;
			}
		}
		printf ("%d\n",mclone[i]);
	}

	return 0;
}

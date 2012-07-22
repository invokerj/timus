#include <stdio.h>

int hotel[101][101];

int main (void )
{
	int n,i,j,k;
	int tol;
	tol = 1;
	scanf ("%d", &n);

	for (k=1;k<=n;k++) {
		i=1;
		j=n-k+1;
		while (i>=1&&j>=1&&i<=n&&j<=n) {
			hotel[i][j]=tol++;
			j++;
			i++;
		}
	}

	for (k=2;k<=n;k++) {
		j=1;
		i=k;
		while (i>=1&&j>=1&&i<=n&&j<=n) {
			hotel[i][j]=tol++;
			i++;
			j++;
		}
	}

	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			printf ("%d ",hotel[i][j]);
		}
		printf ("\n");
	}
	return 0;
}

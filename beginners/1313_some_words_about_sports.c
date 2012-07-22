#include <stdio.h>

int pixel[101][101];

int main (void )
{
	int n;
	int i,j,k;
	scanf ("%d", &n);
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			scanf("%d",&pixel[i][j]);
		}
		getchar();
	}
	/*
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			printf ("%d ",pixel[i][j]);
			*/

	for (k=1;k<=n;k++) {
		i=k;
		j=1;
		while (i>=1&&j>=1&&i<=n&&j<=n) {
			printf ("%d ",pixel[i][j]);
			i--;
			j++;
		}
	}
	
	for (k=2;k<=n;k++) {
		j=k;
		i=n;
		while (i>=1&&j>=1&&i<=n&&j<=n) {
			printf ("%d ",pixel[i][j]);
			i--;
			j++;
		}
	}

	return 0;
}




	

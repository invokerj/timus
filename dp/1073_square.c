#include <stdio.h>

int arr[60001];

int main (void)
{
	int i, j, n;
	arr[0]=0;
	for (i=1;i<=60000;i++) {
		arr[i]=i;
		for (j=1;j*j<=i;j++)
			if (arr[i-j*j]+1<arr[i])
				arr[i]=arr[i-j*j]+1;
	}
	scanf ("%d", &n);
	printf ("%d\n", arr[n]);
	return 0;
}

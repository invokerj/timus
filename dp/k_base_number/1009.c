#include <stdio.h>

unsigned long long int ans[20];

int main (void) 
{
	unsigned long long int n, k,i;
	scanf ("%ld %ld", &n, &k);
	ans[0]=k-1;
	ans[1]=(k-1)*k;
	for (i=2;i<n;i++)
		ans[i]=(ans[i-1]+ans[i-2])*(k-1);

	printf ("%ld\n",ans[i-1]);

}

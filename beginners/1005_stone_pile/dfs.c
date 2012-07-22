#include <stdio.h>
#include <stdlib.h>
#define maxn 27
#define INF 20000007
long sum;
long stone[maxn];
long ans;
long n;

void dfs (long depth, long now)
{
	if (depth >n)
	{
		if(ans>abs(now-(sum-now))) ans=abs(now-(sum-now));
		return ;
	}
	dfs (depth+1, now);
	dfs (depth+1, now+stone[depth]);
}

int main (void)
{
	long i;
	scanf ("%ld", &n); 
	sum = 0;
	for (i=1;i<=n;i++) {
		scanf ("%ld", &stone[i]);
		sum+=stone[i];
	}
	ans=INF;
	dfs (1, 0);
	printf ("%ld\n", ans);

	return 0;
}

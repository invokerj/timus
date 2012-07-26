/*
FROM: acm.timus.ru
PROB: 1017 (The Staircases)
KEYW: dynamical programming
*/

#include <cstdio>

const int MAXN = 1 << 9;

typedef long long big;

int N;
big dp[MAXN][MAXN];

int main () {
	scanf ("%d", &N);

	int i, j;
	for (j = 1; j <= N; ++j)
		dp[0][j] = 1;//nothing left
	
	for (i = 1; i <= N; ++i) {
		dp[i][2] = dp[i-1][1];
		for (j = 3; j <= N && i - j + 1 >= 0; ++j)
			dp[i][j] = dp[i][j-1] + dp[i-j+1][j-1];
		for (; j <= N; ++j)
			dp[i][j] = dp[i][j-1];
	}

#ifdef ONLINE_JUDGE
	printf ("%I64d\n", dp[N][N]);
#else
	printf ("%Ld\n", dp[N][N]);
#endif

	return 0;
}


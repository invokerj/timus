#include <stdio.h>

//i<=n; j<=s
//dp[i][j]=dp[i-1][j]+dp[i-1][j-k] (1<=k<=j && k<=9)
int dp[11][82];

int main (void)
{
	int  i, j, k, s, ans;
	ans=0;
	scanf ("%d", &s);
	for (i=1;i<10;i++) dp[1][i]=1;
	//for (i=10;i<82;i++) dp[1][i]=0;
	for (i=1;i<=9;i++) {
		for (j=1;j<=9*i;j++) {
			for (k=0;k<=j && k<=9;k++)
				dp[i][j]+=dp[i-1][j-k];
		}
	}

	if (s!=1) {
		for (i=1;i<10;i++)
			ans+=dp[i][s];
		printf ("%d\n", ans);
	} else 
		printf ("10\n");
	return 0;
}

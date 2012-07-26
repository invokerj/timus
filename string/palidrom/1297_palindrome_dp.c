#include <stdio.h>
#include <string.h>
#define true 1

char s[1001];
int dp[1001][1001];
int len;

int main (void)
{
	int i, j;
	int rl, rs;

	scanf ("%s", s);
	len = strlen (s);
	for (i=0;i<len;i++)
		dp[i][0]=dp[i][1]=true;

	rl=1; rs=0;
	for (i=2;i<=len;i++) {
		for (j=0;j<=len-i;j++) {
			dp[j][i]=(dp[j+1][i-2] && (s[j]==s[j+i-1]));
			if (dp[j][i] && (i>rl)) {
				rs=j;
				rl=i;
			}
		}
	}
	for (i=0;i<=(rl-1);i++)
			printf ("%c",s[i+rs]);
	printf ("\n");
	return 0;
}

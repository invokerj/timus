#include <iostream>
#include <string>

using namespace std;

string s;
bool dp[1001][1001];

int main() {
        cin >> s;
        int n = s.length();
        for(int i = 0; i < n; i ++)
                dp[i][0] = dp[i][1] = true;
        int rl = 1, rs = 0;
        for(int i = 2; i <= n; i ++)
                for(int j = 0; j <= n-i; j ++) {
                        dp[j][i] = (dp[j+1][i-2] && s[j] == s[j+i-1]);
                        if(dp[j][i] && i > rl) {
                                rs = j;
                                rl = i;
                        }
                }
                cout << s.substr(rs, rl) << endl;
        return 0;
}

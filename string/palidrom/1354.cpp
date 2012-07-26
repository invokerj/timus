#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
char s[10001];
int main(){
        s[0] = 0;
        scanf("%s", s);
        int L = strlen (s);
        if(L == 0)
        {
                cout << "a" << endl;
        }
        else if(L == 1)
        {
                cout << s << s << endl;
        }
        for(int i = 1; i < L; i ++){
                bool valid = true;
                int LL = L - i;
                for(int j = 0; j < LL && valid; j ++)
                        if(s[i + j] != s[L - j - 1])
                                valid = false;
                if(valid){
                        cout << s;
                        for(int j = i-1; j >= 0; j --)
                                cout << s[j];
                        cout << endl;
                        break;
                }
        }
        return 0;
}

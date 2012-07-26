#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

const int N = 600000;

char a[N], b[N];
int n, overlap[N];

void calc_overlap(char* pattern, int* overlap) {
        overlap[0] = -1;
        for (int i = 0; pattern[i] != '\0'; i++) {
                overlap[i + 1] = overlap[i] + 1;
                while (overlap[i + 1] > 0 &&
                pattern[i] != pattern[overlap[i]])
                        overlap[i + 1] = overlap[overlap[i +1 ]-1  ] + 1;
        }
}

int kmp(char* T, char* P, int* overlap) {
        int i, j, k;
            j = 0;
    for (i = 0; i < 2 * n; i++)
    for (;;) {      // loop until break
        if (T[i] == P[j]) { // matches?
        j++;        // yes, move on to next state
        if (j == n) {   // maybe that was the last state
            return i - n + 1;
            j = overlap[j];
        }
        break;
        } else if (j == 0) break;   // no match in state j=0, give up
        else j = overlap[j];    // try shorter partial match
    }
        return -1;
}

int main() {
        scanf("%d", &n);
        scanf("%s", b);
        scanf("%s", a);
        for( int i = 0; i < n; i ++ )
                a[i + n] = a[i];
        a[2 * n] = 0;
        //~ printf("%s\n%s\n", a, b);
        calc_overlap(b, overlap);
        cout << kmp(a, b, overlap) << endl;
        return 0;
}


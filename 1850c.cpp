// On an 8×8 grid of dots, a word consisting of lowercase Latin letters is written vertically in one column, from top to bottom. What is it?
#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 100005;
int t;
char ch[9][9];
signed main() {
    cin >> t;
    while(t--) {
        For(i, 1, 8) scanf("%s", ch[i] + 1);
        For(j, 1, 8) For(i, 1, 8) if(ch[i][j] != '.') {
            while(i + 1 <= 8 && ch[i + 1][j] != '.') {
                cout << ch[i][j];
                i ++;
            }
            cout << ch[i][j];
        }
        puts("");
    }
    

    return 0;
}
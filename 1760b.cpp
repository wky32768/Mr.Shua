#include <bits/stdc++.h>
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 105;
char ch[N];
int t, n;
signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        scanf("%s", ch + 1);
        int ans = 0;
        For(i, 1, n) {
            ans = max(ans, ch[i] - 'a' + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
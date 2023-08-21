#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, c, a[N];
signed main() {
    cin >> t;
    while(t--) {
        cin >> n >> c;
        For(i, 1, n) cin >> a[i];
        sort(a + 1, a + n + 1);
        int mx = 0, at = 1;
        For(i, 2, n) if(a[i] - a[i - 1] > c) {
            mx = max(mx, i - at);
            at = i;
        }
        mx = max(n + 1 - at, mx);
        if(mx == 0) mx = n;
        cout << n - mx << '\n';
    }

    return 0;
}
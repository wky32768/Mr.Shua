#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, sum, a[N];

bool ok(int x) {
    int tot = 0;
    For(i, 1, n) {
        tot += (a[i] + 2 * x) * (a[i] + 2 * x); 
        if(tot > sum) return 0;
    }
    return 1;
}

signed main() {
    cin >> t;
    while(t--) {
        cin >> n >> sum;
        For(i, 1, n) cin >> a[i];
        int l = 1, r = 1e9, ans = 0;
        while(l <= r) {
            int mid = (l + r) >> 1;
            if(ok(mid)) {
                ans = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
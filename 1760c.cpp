#include <bits/stdc++.h>
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, a[N];
signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        int mx = 0, se = 0;
        For(i, 1, n) {
            cin >> a[i];
            if(a[i] > mx) {
                se = mx;
                mx = a[i];
            } else if(a[i] > se) {
                se = a[i];
            }
        }
        For(i, 1, n) {
            if(a[i] != mx) cout << a[i] - mx << ' ';
            else cout << mx - se  << ' ';
        }
        puts("");
    }
    return 0;
}
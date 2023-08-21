#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, x, y, cha[N], he[N], xx[N], yy[N];
signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        For(i, 1, n) {
            cin >> x >> y;
            cha[i] = y - x;
            he[i] = y + x;
            xx[i] = x;
            yy[i] = y;
        }
        sort(cha + 1, cha + n + 1);
        int ans = 0, last = 1;
        For(i, 2, n) if(cha[i] != cha[i - 1]) {
            ans += (i - last) * (i - last - 1);
            last = i;
        }
        ans += (n - last + 1) * (n - last);
        sort(he + 1, he + n + 1);
        last = 1;
        For(i, 2, n) if(he[i] != he[i - 1]) {
            ans += (i - last) * (i - last - 1);
            last = i;
        }
        ans += (n - last + 1) * (n - last);
        sort(xx + 1, xx + n + 1);
        last = 1;
        For(i, 2, n) if(xx[i] != xx[i - 1]) {
            ans += (i - last) * (i - last - 1);
            last = i;
        }
        ans += (n - last + 1) * (n - last);
        sort(yy + 1, yy + n + 1);
        last = 1;
        For(i, 2, n) if(yy[i] != yy[i - 1]) {
            ans += (i - last) * (i - last - 1);
            last = i;
        }
        ans += (n - last + 1) * (n - last);
        cout << ans << endl;
    }
    return 0;
}
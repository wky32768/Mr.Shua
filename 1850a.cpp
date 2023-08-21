#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
int n, a, b, c;
signed main() {
    cin >> n;
    For(i, 1, n) {
        cin >> a >> b >> c;
        if(a + b >= 10 || b + c >= 10 || a + c >= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
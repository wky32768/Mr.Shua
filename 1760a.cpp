#include <bits/stdc++.h>
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
signed main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a + b + c - max(max(a, b), c) - min(min(a, b),  c) << endl;
    }
    return 0;
}
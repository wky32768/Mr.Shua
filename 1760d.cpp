#include <bits/stdc++.h>
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, a[N];
signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        For(i, 1, n) cin >> a[i];
        int tot = 0;
        int down = 1;
        For(i, 2, n) {
            if(a[i - 1] < a[i]) {
                if(down == 1) {tot++; down = 0;}
            } else if(a[i - 1] > a[i]) {
                if(down == 0) down = 1;
            }
        }
        if(down == 1) tot++;
        cout << (tot == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
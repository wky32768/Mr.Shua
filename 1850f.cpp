#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, a[N];
map <int, int> tot;
signed main() {
    cin >> t;
    while(t--) {
        tot.clear();
        cin >> n;
        For(i, 1, n) {
            cin >> a[i];
            tot[a[i]]++;
        }
        int mx = 0;
        For(i, 1, n) {
            int temp = 0;
            For(j, 1, sqrt(i)) {
                if(i % j == 0)  {
                    temp += tot[j];
                    if(i / j != j) temp += tot[i / j];
                }
            }
            // cout << "temp " << temp << endl;
            mx = max(mx, temp);
        }
        cout << mx << endl;
    }
    return 0;
}
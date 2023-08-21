#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 100005;
int t, n;
struct node {
    int a, b, id;
    friend bool operator < (node x, node y) {
        return x.b > y.b;
    }
} c[N];
signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        For(i, 1, n) {
            cin >> c[i].a >> c[i].b;
            c[i].id = i;
        }
        sort(c + 1, c + n + 1);
        For(i, 1, n) if(c[i].a <= 10) {
            cout << c[i].id << endl;
            break;
        }
    }
    return 0;
}
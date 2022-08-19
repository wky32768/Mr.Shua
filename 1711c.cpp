#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, m, k;
int a[N];
bool cmp(int x, int y) {return x>y;}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m>>k;
        For(i,1,k) cin>>a[i];
        sort(a+1, a+k+1, cmp);
        int tot=0;
        if(n==1 || m==1) {puts("NO"); continue;}
        if(m==3) {
            if(a[1]>=n*m) {puts("Yes"); continue;}
        } else {
            int have3=0;
            For(i,1,k) {
                if(a[i]/n>=2) tot+=a[i]/n;
                if(a[i]/n>=3) have3=1;
            }
            if(m%2==0 && tot>=m) {puts("Yes"); continue;}
            if(m%2==1 && tot>=m && have3==1) {puts("Yes"); continue;}
        }
        tot=0;
        if(n==3) {
            if(a[1]>=n*m) {puts("Yes"); continue;}
        } else {
            int have3=0;
            For(i,1,k) {
                if(a[i]/m>=2) tot+=a[i]/m;
                if(a[i]/m>=3) have3=1;
            }
            if(n%2==0 && tot>=n) {puts("Yes"); continue;}
            if(n%2==1 && tot>=n && have3==1) {puts("Yes"); continue;}
        }
        puts("No");
    }
    return 0;
}
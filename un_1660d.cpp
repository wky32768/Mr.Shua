/*
1. total negative number is even, 0 0 
2. total negative number is odd
    no zeros: find the first negative multi the min
    zero: 
        1. l: zero, nega-----r:0
        2. l: zero----r:nega
        3. l: nega----.r zero
        4. l: 0----r.nega zero
*/
#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n;
int a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        int zero=0, fs=0;
        For(i,1,n) {
            if(a[i]==0) zero++;
            else if(a[i]<0) fs++;
        }
        if(zero==0) {
            if(fs%2==0) puts("0 0");
            else {
                int mul1=1, mul2=1, tot1, tot2;
                for(int i=1;i<=n;i++) {
                    mul1*=abs(a[i]);
                    if(a[i]<0) {tot1=i; break;}
                }
                for(int i=n;i>=1;i--) {
                    mul2*=abs(a[i]);
                    if(a[i]<0) {tot2=i; break;}
                }
                if(mul1>mul2) cout<<"0 "<<n+1-tot2<<'\n';
                else cout<<tot1<<" 0\n";
            }
        } else {


            
        }
    }
}
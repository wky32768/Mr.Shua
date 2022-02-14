#include <bits/stdc++.h>
using namespace std;
const int N=20;
int t;
char a[N], s[N];
int ans[N];
signed main() {
	cin >> t;
	while(t--) {
		scanf("%s", a + 1); scanf("%s", s + 1);
		int n1 = strlen(a + 1), n2 = strlen(s + 1), cnt = 0;
		while(n1 > 0 && n2 > 0) {
			if(a[n1] <= s[n2]) {
				ans[++cnt] = (int)(s[n2] - a[n1]);
				n1--, n2--;
			} else {
				if(s[n2-1] != '1') {
					puts("-1");
					goto L1;
				} else {
					ans[++cnt] = (int)(s[n2] + 10 - a[n1]);
					n1--, n2-=2;
				}
			}
		}
		if(n1 > 0) {puts("-1"); goto L1;}
		else if(n1 == 0 && n2 > 0) for(int i=n2;i>=1;i--) ans[++cnt]=s[i]-'0';
		while(ans[cnt]==0) cnt--;
		for(int i = cnt; i >= 1; i--) cout << (char)(ans[i]+'0');
		puts("");
		L1:;
	}
}

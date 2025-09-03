#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=998244353;
signed main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), v(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            v[a[i]] = i;
        }
        int l = n, r = -1, ans = 0;
        for (int i = 1; i <= n; i++) {
            if (v[i] < l || v[i] > r) {
                ans = (ans + i) % MOD;
            } else {
                ans = (ans + 1) % MOD;
            }
            if (v[i] < l) {
                l = v[i];
            }
            if (v[i] > r) {
                r = v[i];
            }
        }
        cout << ans << "\n";
    }
}
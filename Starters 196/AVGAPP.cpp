#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	// your code goes here
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        int s = 0, m = 1e18, cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            s += a[i];
            if (a[i] < m) m = a[i], cnt = 1;
            else if (a[i] == m) cnt++;
        }
        if (cnt >= 2) {
            cout << s + k * m << '\n';
            continue;
        }
        int sm = 1e18;
        for (int i = 0; i < n; i++) if (a[i] != m) sm = min(sm, a[i]);
        int d = sm - m;
        int ops = 0;
        while (d > 1 && ops < k) {
            d = (d + 1) / 2;
            s += m + d;
            ops++;
        }
        s += (k - ops) * (m + 1);
        cout << s << '\n';
    }
    return 0;
}

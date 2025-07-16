#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.rbegin(), a.rend());

        vector<long long> pre(n + 1);
        for (int i = 0; i < n; ++i) pre[i + 1] = pre[i] + a[i];

        vector<long long> ans(2 * n + 1);
        for (int m = 0; m <= n; ++m) {
            for (int t = 0; t <= m; ++t) {
                int k = m + t;
                if (k > 2 * n) continue;
                long long sum = pre[m] + 1LL * t * (2 * m - t - 1) / 2;
                ans[k] = max(ans[k], sum);
            }
        }
        for (int k = 1; k <= 2 * n; ++k) cout << ans[k] << " ";
        cout << '\n';
    }
}

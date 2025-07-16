#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i - 1];

    for (int k = 1; k <= 2 * n; k++) {
        int left = (k + 1) / 2;
        int right = min(n, k);

        while (left < right) {
            int mid = (left + right) / 2;

            int y1 = k - mid;
            int s1 = pre[mid] + y1 * (2 * mid - y1 - 1) / 2;

            int y2 = k - (mid + 1);
            int s2 = pre[mid + 1] + y2 * (2 * (mid + 1) - y2 - 1) / 2;

            if (s1 < s2) left = mid + 1;
            else right = mid;
        }

        int y = k - left;
        int result = pre[left] + y * (2 * left - y - 1) / 2;
        cout << result << " ";
    }

    cout << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}

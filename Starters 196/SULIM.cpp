#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int ans = 0;
        for (int l = 0; l <= 100; l++) {
            int s = 0;
            for (int i = 0; i < n; i++)
                if (b[i] <= l && a[i] > 0) s += a[i];
            ans = max(ans, s - l);
        }
        cout << ans << '\n';
    }
    return 0;
}

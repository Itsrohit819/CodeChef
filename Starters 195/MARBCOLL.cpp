#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m, x; cin >> n >> m;
        vector<bool> seen(m + 1, 0);
        while (n--) {
            cin >> x;
            seen[x] = 1;
        }
        int cnt = 0;
        for (int i = 1; i <= m; ++i) cnt += !seen[i];
        cout << cnt << '\n';
    }
}

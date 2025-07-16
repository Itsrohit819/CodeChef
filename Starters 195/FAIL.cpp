#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int sum = 0, x, ok = 1;
        for (int i = 1; i <= n; ++i) {
            cin >> x;
            sum += x;
            if (ok && sum < 40 * i) ok = 0;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
}

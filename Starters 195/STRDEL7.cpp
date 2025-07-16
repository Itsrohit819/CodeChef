#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> v;
        int c = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) c++;
            else {
                v.push_back(c);
                c = 1;
            }
        }
        v.push_back(c);
        int m = v.size();
        if (m < 3) {
            cout << n << '\n';
            continue;
        }
        int a = v[0] + v[m - 1] + (m % 2 == 0);
        cout << a << '\n';
    }
    return 0;
}

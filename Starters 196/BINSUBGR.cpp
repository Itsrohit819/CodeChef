#include <bits/stdc++.h>
using namespace std;
//#define int long long
int main() {
    //your code goes here
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; string s; cin >> n >> s;
        int l = 0, z = 0, o = 0, res = 0;
        for (int r = 0; r < n; r++) {
            if (s[r] == '0') z++;
            else o++;
            while (z > 1 && o > 1) {
                if (s[l++] == '0') z--;
                else o--;
            }
            res = max(res, r - l + 1);
        }

        for (int i = 0; i + 3 < n; i++) {
            string x = s.substr(i, 4);
            if (x == "0101" || x == "1010")
                res = max(res, 4);
        }
        cout << res << '\n';
    }
}

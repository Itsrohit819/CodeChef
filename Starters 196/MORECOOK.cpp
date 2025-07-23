#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T; cin >> T;
    while (T--) {
        int N, C; cin >> N >> C;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        for (int x = 0; x <= 100; x++) {
            int newC = C + x;
            bool hasLess = false, hasEqual = false;
            for (int a : A) {
                if (a == newC) hasEqual = true;
                if (a < newC) hasLess = true;
            }
            if (!hasEqual && hasLess) {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}

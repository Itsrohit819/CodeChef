#include <bits/stdc++.h>
using namespace std;
#define int long long

struct N {
    int nxt[2], add[2];
    static N leaf(int a, int b, int k) {
        N x;
        for (int s = 0; s < 2; ++s) {
            int aa = (s == 0 ? a : b), bb = (s == 0 ? b : a);
            if (aa + k < bb) x.nxt[s] = s ^ 1, x.add[s] = bb;
            else x.nxt[s] = s, x.add[s] = aa;
        }
        return x;
    }
    static N mrg(const N &l, const N &r) {
        N x;
        for (int s = 0; s < 2; ++s) {
            int m = l.nxt[s];
            x.nxt[s] = r.nxt[m];
            x.add[s] = l.add[s] + r.add[m];
        }
        return x;
    }
};

const int M = 2e5 + 5;
N st[4 * M];
int a[M], b[M], n, k;

void build(int i = 1, int l = 0, int r = n - 1) {
    if (l == r) { st[i] = N::leaf(a[l], b[l], k); return; }
    int m = (l + r) / 2;
    build(i * 2, l, m);
    build(i * 2 + 1, m + 1, r);
    st[i] = N::mrg(st[i * 2], st[i * 2 + 1]);
}

void upd(int p, int isA, int x, int i = 1, int l = 0, int r = n - 1) {
    if (l == r) {
        if (isA) a[p] = x; else b[p] = x;
        st[i] = N::leaf(a[p], b[p], k);
        return;
    }
    int m = (l + r) / 2;
    if (p <= m) upd(p, isA, x, i * 2, l, m);
    else upd(p, isA, x, i * 2 + 1, m + 1, r);
    st[i] = N::mrg(st[i * 2], st[i * 2 + 1]);
}

signed main() {
    // your code goes here
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int q; cin >> n >> k;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        build();
        cin >> q;
        while (q--) {
            int tp, p, x;
            cin >> tp >> p >> x;
            upd(p - 1, tp == 1, x);
            cout << st[1].add[0] << '\n';
        }
    }
}

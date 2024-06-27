#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        int b[n];
        map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            a[i] = a[i]%m;
            if(a[i]==0){
                a[i]=m;
            }
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            b[i] = b[i]%m;
            if(mp[m-b[i]]>=1){
                ans+=mp[m-b[i]];
            }
        }
        cout << ans << endl;
    }
}

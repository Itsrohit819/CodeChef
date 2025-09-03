#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
#define int long long
signed main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+1);
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        vector<int> v(n+1,0), a(n+1,0);
        for(int i=1;i<=n;i++){
            if(!v[i]){
                int l=0,j=i;
                while(!v[j]){
                    v[j]=1;
                    j=p[j];
                    l++;
                }
                a[l]++;
            }
        }
        int ans=0;
        for(int l=2;l<=n;l++){
            if(!a[l]){
                continue;
            }
            int sl=0;
            for(int a=1;a<=n;a++){
                int k=(l*a)/(l-1);
                if(k>n){
                    k=n;
                }
                int s1=(l-1)*((k*(k+1))/2);
                int s2=(n-k)*l*a;
                sl=(sl+s1+s2)%mod;
            }
            ans=(ans+a[l]*sl)%mod;
        }
        cout<<ans<<"\n";
    }
}
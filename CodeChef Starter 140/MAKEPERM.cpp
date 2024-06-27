#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(a[j]<=i){
                    cnt++;
                }
            }
            if(cnt>=i){
                ans++;
            }
        }
        if(ans==n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(char c:s){
            if(c=='1'){
                ans++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'&&s[i+1]=='1'){
                ans+=2;
            }
            else if(s[i]=='1'||s[i+1]=='1'){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
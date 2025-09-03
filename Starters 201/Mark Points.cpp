#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int flag=1;
        for(int i=0;i<n;){
            if(s[i]=='0'){
                i++;
                continue;
            }
            int j=i;
            while(j<n && s[j]=='1'){
                j++;
            }
            int cur=j-i;
            if(cur==1 || cur==2){
                flag=0;
            }
            i=j;
        }
        if(flag){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,cnt=0;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i] < a[i]){
                cnt += (a[i]-b[i]);
            }
        }
        cout << cnt << endl;
    }
}

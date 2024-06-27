#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==0){
            for(int i=1;i<=n/2;i++){
                cout << i << " " << n-i+1 << " ";
            }
        }
        else{
            for(int i=1;i<=(n-1)/2;i++){
                cout << i << " " << n-i << " ";
            }
            cout << n << " ";
        }
        cout << endl;
    }
}

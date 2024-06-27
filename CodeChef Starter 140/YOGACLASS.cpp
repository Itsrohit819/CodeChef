#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>> b>> c;
        if(c>2*b){
            int x=a/2;
            if(a%2){
                cout << x*c+b << endl;
            }
            else{
                cout << x*c << endl;
            }
        }
        else{
            cout << a*b << endl;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==0){
            if(m==2){
                cout<<">=>\n";
            }else{
                cout<<">";
                for(int i=0;i<m-2;i++){
                    cout<<"<>";
                }
                cout<<"=>\n";
            }
        }else if(m==0){
            if(n==2){
                cout<<"<=<\n";
            }else{
                for(int i=0;i<n-2;i++){
                    cout<<"<<";
                }
                cout<<"<=<\n";
            }
        }else{
            for(int i=0;i<2*n;i++){
                cout<<"<";
            }
            for(int i=0;i<2*m-1;i++){
                if(i%2==0){
                    cout<<">";
                }else{
                    cout<<"<";
                }
            }
            cout<<"\n";
        }
    }
}
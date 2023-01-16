#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
void solve(){
    int n;
    cin >> n;

    if( n  == 3){
        cout << "NO" <<endl; 
    }
    else if(n % 2 == 0){
        cout << "YES" <<endl;
        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0){
                cout << 5000 << " ";
            }
            else{
                cout << -5000 << " ";
            }
        }
        cout << endl;
    }
    else{
        cout << "YES" <<endl;
        for(int i = 0 ; i < n ; i++){
            int x= 10/n
            if(i % 2 == 0){
                cout << 5000 << " ";
            }
            else{
                cout << -5000 << " ";
            }
        }
        cout << endl;

    }
    

    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
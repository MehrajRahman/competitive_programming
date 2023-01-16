#include <bits/stdc++.h>
using namespace std;

int solve(){

    long long int a,n;
    cin >> a;

    n = a;
    int flag = 0;
    if(a % 2 == 1){
        cout << "YES" << endl;
    }
    else{
        while(n > 1){
            n = n / 2;

            if(n > 1 && n % 2 == 1){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
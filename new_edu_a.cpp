#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
void solve(){

    ll n ;
    cin >> n;
    vector<ll> v(n);


    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll sum = 0, flag = 0, sm = 1;
    sum = v[0];

    for(int i = 0; i < n; i++){
        if(v[i] != v[0]){
            sm = 0;
            break;
        }
    }

    for(int i = 1; i < n; i++){
        if(v[i] == sum ){
            flag = 1;
            break;
        }
        sum += v[i];
    }


    if(flag == 1){
        // cout << "NO" << endl;
        // sort(v.begin(), v.end());

        // for(int i = 0; i < n; i++){
        //     cout << v[i] <<" ";
        // }

        // cout << endl;
        if(sm == 1){
            cout << "NO" <<endl;
        }

        else{
            cout << "YES" <<endl;
            int mid;
            if(n % 2 == 1){
                mid = n / 2 + 1;
            }
            else{
                mid = n / 2;
            }
           
            for(int i = 0; i < mid; i++){
                cout << v[i] <<" ";
                if(n % 2 == 1 && i != mid - 1){
                    cout  <<v[n- (i + 1)] <<" " ;
                }
                else if(n % 2 == 0){
                    cout  <<v[n- (i + 1)] <<" " ;

                }
            }
            cout << endl;
        }
    }
    else{
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            cout << v[i] <<" ";
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
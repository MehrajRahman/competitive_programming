#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
void solve(){


    int n , k;
    cin >> n >> k;
    vector  <pair <int, int>> v(n);

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v[i-1] = make_pair(x,i);
    }

    int diff = 0, count = 0;


    for(int i = 0; i < n-1; i++){
        if(i == 0){
            diff = abs(v[0].first - v[0].second);
            
        }
        else if(abs(v[i].first - v[i].second) > diff){
            diff = abs(v[i].first - v[i].second) ;
            

        }
        
        if(abs(v[i].first - v[i].second) >= 1){
            count++;
        }        
    }
    int max  = n/k;
    if(diff > count){
        if(count > max ){
            cout << max << endl;
        }else{
            cout << count << endl;
        }
    }
    else{
        if(count > max){
            cout << max  << endl;
        }
        else{
            cout << count << endl;
        }
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
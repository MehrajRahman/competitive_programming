#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
void solve(){
    int n, count = 0;
    cin >> n;
    string a;
    cin >> a;

    

    int l = 0, r= 0, flag = 0;
    for(int i = 0; i< n-1; i++){

        if(a[i] == 'R' && a[i + 1] == 'L'){
            // cout << "Entered!!";
            flag = 1;
            cout << 0 <<endl;
            break;        
        }
        if(a[i] == 'L' ){
            l++;
        }
        if(a[i] == 'R' ){
            r++;
        }
    }



    if(a[n-1] == 'L'){
        l++;
    }
    if(a[n-1] == 'R'){
        r++;
    }
    if(flag == 0 && (l == n|| r == n )){
        cout << -1 << endl;
    }
    else if(flag == 0){
        for(int i = 0; i< n-1; i++){
                if(a[i] == 'L' && a[i + 1] == 'R'){
                    count = i;
                            
            }
            
        
        }

        cout << count + 1 << endl;
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
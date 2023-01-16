#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
void solve(){

    string a;
    cin >> a;
    int l  = a.length(), flag = 0;

    int s = 0, n = 0, e = 0 , w = 0;

    for(int i = 0; i < l ; i++){
    	if(a[i] == 'S'){
    		s++;

    	}
    	if(a[i] == 'N'){
    		n++;

    	}
    	if(a[i] == 'E'){
    		e++;

    	}
    	if(a[i] == 'W'){
    		w++;

    	}
    }

    if(((s > 0 && n > 0 ) || ((s == 0 ) && n == 0)) && ((e > 0 && w > 0 ) || ((w == 0 ) && e == 0))){
        	cout << "YES" << endl;
    }
     else{
     	cout << "NO" << endl;
     }
    


    
}

int main(){
    // int t;
    // cin >> t;

    // while(t--){
    //     solve();
    // }
    solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
void solve(){

    string a;
    cin >> a;
    int l  = a.length(), flag = 0;

    if(a[l-1 ] != 'n' && a[l-1 ] != 'a' && a[l-1 ] != 'e' && a[l-1 ] != 'i'&&a[l-1 ] != 'o' && a[l-1 ] != 'u'){
    	cout << "NO" <<endl;


    }
	else{
    	for(int i = 0 ; i < l-1; i++){
    	
	    	if(a[i] != 'n' && a[i] != 'a' && a[i] != 'e' && a[i] != 'o' && a[i] !='i' && a[i] != 'u'){
	    		if(a[i + 1 ] != 'a' && a[i + 1] != 'e' && a[i + 1] != 'o' && a[i + 1] !='i' && a[i + 1] != 'u'){
	    			cout<< "NO" << endl;
	    			flag = 1;
	    		}
	    	}
    	}


	    if(flag == 0){
	    	cout << "YES" << endl;
	    }

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
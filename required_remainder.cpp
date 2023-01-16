#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve(){
	ll x , y , n;


	cin >> x >> y >> n;

	ll div;

	div = n / x;
	if(n % x >= y) {
		cout << div * x + y <<endl;
	}else{
		cout << (div - 1) * x + y <<endl;
	}


}


int main(){
	ll t;
	cin >> t;

	while(t--){
		solve();
	}



	return 0;
}
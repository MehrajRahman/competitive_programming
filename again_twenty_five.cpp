#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve(){
	int n;
	cin >> n;
	
	vector<int> v(n);

	int a , b;
	cin >> a >> b;

	if(n == 1){
		if(a == b){
			cout << 1 <<endl;
			cout << a << ":" << b <<endl;
		}else{
			cout << 0 << endl;
			cout << a << ":" << b <<endl;
		}

	}
	else if(a + b < n){
		cout << n - (a + b) << endl;
		for(int j = 0; j< n; j++){
			cout << 1 << ":" << 0<<endl;
			cout << 0 << ":" << 1<<endl;
		}
	}


}


int main(){
	solve();
	return 0;
}
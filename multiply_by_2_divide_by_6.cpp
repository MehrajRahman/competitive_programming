#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){

	double a;

	cin >> a;

	int count = 0, flag = 0;

	for(int i = 1; i < 15; i++){
		double r =  a / (pow(6, i)) ;
		cout << "A is : " << a << "||" << r << endl;
		count++;
		if(r == 0){
			break;
		}
		if(r == 1){
			flag = 1;
		}
	}

	int test;

	if(flag == 0){
		cout << "NOT DIVIDED!!" << endl;
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
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve(){
	int n;
	cin >> n;
	set <int > s;

	for(int i = 0; i < n; i++ ){
		int x ;
		cin >> x;
		s.insert(x);
	}
	long long int diff = 10000000;

	// for (auto it=s.begin(); it != s.end(); ++it){
	// 	cout << *it <<endl;
	// 	int dif = abs(*it - *++it);
	// 	if(dif<diff){
	// 		diff = dif;
	// 	}
	// }

	for (auto it=s.cbegin(); it != s.cend(); ++it){
		    cout << *it <<endl;
			int dif = abs(*it - *(it +2));
			if(dif<diff){
				diff = dif;
				cout << diff <<endl;
			}
	}




	// auto it2=s.cbegin();
	// int min = *it2;
	// it2=s.cend();

	// int max = *--it2;

	// cout << min <<" " << max ;
	// for(int i = min; i <=max; i += diff){
	// 	s.insert(i);
	// }





	cout<< s.size()<< endl;



}


int main(){
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

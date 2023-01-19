#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		int n, a, b;
		cin >> n >> a >> b;


		string result, min;
		int count = 0;

		for (int i = 97 ; i < (97 + b); ++i){
			min.push_back(i);
			count++;

		}

		double t = ceil((n*1.0)/b);

		for(int i = 0; i < t; i++){
			result+=min;
		}

		for(int i = 0; i < n; i++){
			cout << result[i] ;
		}
		cout << endl;
	}

	return 0;
}
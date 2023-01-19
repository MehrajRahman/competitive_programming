#include <bits/stdc++.h>
using namespace std;


bool comp(int a, int b){
	return a > b;
}

int main(){
	

		int n;
		cin >> n;


		vector <int> v(12);

		for(int i = 0 ; i < 12; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end(), comp);
		int count  = 0, flag= 0, trc = 0;

		
		for(int i = 0 ; i < 12; i++){
			if(count < n){
				count += v[i];
				trc++;
			}
			if(count >=n){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout << trc << endl;
		}else{
			cout << -1 << endl;
		}

		
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
	return a > b;
}

int main(){
	int k;
	cin >> k;
	while(k--){

		int n,x,m, flag= 0;
		cin >>x >> n>> m;

		int t = n;

		if(x <= m*10){
			cout << "YES" <<endl;
			flag = 1;
		}

		if(flag == 0){
			while(n--){
				if(flag == 0 && x <= m*10){
					cout << "YES" <<endl;
					flag = 1;
				}
				x = x/2 + 10;
			}
		}


		x -= m*10;

		if(flag == 0){
			if(x <= 0 ){
				cout << "YES" <<endl;
			}
			else{
				cout << "NO" << endl;
			}

		}

		
	}


	return 0;
}
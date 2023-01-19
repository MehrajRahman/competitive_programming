
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while ( t--){
		int n;
		cin >> n;
		int end = n*2 - 1;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n*2; j++ ){
				if(j > i && j < end ){
					cout << "#";
				}else{
					cout << "*";
				}
			}
			cout << endl;
			end -=1;
		}
	}


	



	return 0;
}
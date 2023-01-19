
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while ( t--){
		int n;
		cin >> n;
		int end = n - 1;
		for(int i = 0; i <  n; i++){
			for(int j = 0; j  < n; j++ ){
				if(j > i - 1 && j < end + 1 ){
					cout << n - i;
				}else{
					cout << n ;
				}
			}
			cout << endl;
			end -=1;
		}
	}


	



	return 0;
}
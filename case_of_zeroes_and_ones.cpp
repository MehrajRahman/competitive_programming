#include <bits/stdc++.h>
using namespace std;

int main(){
	

		int n;
		cin >> n;


		string result;
		cin >> result;
		int c0 = 0, c1 = 0;

		for (int i = 0 ; i < (n); ++i){
			if(result[i] == '0' ){
				c0++;
			}else{
				c1++;
			}

		}
		cout << abs(c1 - c0) << endl;

		
	
	return 0;
}
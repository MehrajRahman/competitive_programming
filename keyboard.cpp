#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	string b;
	string c;
	a = "qwertyuiop";
	b = "asdfghjkl;";
	c = "zxcvbnm,./";

	char f;

	cin >> f;

	string test;
	cin >> test;

	string r;


int la = a.size();
		int lb = b.size();
		int lc = c.size();

		int lt = test.size();
	if(f == 'R'){
		

		for(int i = 0; i < lt; i++){
			for(int j = 0; j < la; j++){
				if(test[i] == a[j]){
					r.push_back(a[j-1]);
					break;
				}
			}

			for(int j = 0; j < lb; j++){
				if(test[i] == b[j]){
					r.push_back(b[j-1]);
					break;
				}
			}

			for(int j = 0; j < lc; j++){
				if(test[i] == c[j]){
					r.push_back(c[j-1]);
					break;
				}
			}



		}



	}else{


		for(int i = 0; i < lt; i++){
			for(int j = 0; j < la; j++){
				if(test[i] == a[j]){
					r.push_back(a[j+1]);
					break;
				}
			}

			for(int j = 0; j < lb; j++){
				if(test[i] == b[j]){
					r.push_back(b[j+1]);
					break;
				}
			}

			for(int j = 0; j < lc; j++){
				if(test[i] == c[j]){
					r.push_back(c[j+1]);
					break;
				}
			}



		}

	}


	cout << r;

	return 0;
}
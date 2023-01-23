#include <bits/stdc++.h>
using namespace std;


int main(){
	

		string a, r;
		cin >> a;

		int l;

		l = a.size();

		
		for(int  i = 0; i < l; i++){
			if(a[i] == 'a'|| a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u' || a[i] == 'y' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y'){

			}
			else{
				r.push_back('.');
				char c;
				if(a[i] >=65 && a[i] < 97){
					c = a[i] + 32;
				}
				else{
					c = a[i];
				}
				r.push_back(c);
			}
		}

		cout << r << endl;



		
		
	
	return 0;
}
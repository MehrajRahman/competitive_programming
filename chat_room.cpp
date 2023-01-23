#include <bits/stdc++.h>
using namespace std;

int main(){
	string a ;
	cin >> a;

	int l = a.size();
	int ch = -1,  ce = -1, cl = -1, co = -1, ccl = 0;
	for(int i = 0; i < l  ; i++){
		if( ch == -1 &&  a[i] == 'h'){
			ch = i;
		}
		if(ce == -1 && a[i] == 'e' && i > ch && ch >-1){
			ce = i;
		}
		if(ccl < 3 && a[i] == 'l' && i > ce && ce >-1){
			cl = i;
			ccl++;
		}
		if(co == -1 && a[i] == 'o' && i > cl && cl >-1){
			co = i;
		}
	}

	if(ce !=  -1 && cl != -1 && co != -1 && ch != -1 && ccl > 1){
		cout << "YES" <<endl;
	}
	else{
		cout << "NO" <<endl;
	}

	return 0;
}
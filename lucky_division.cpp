#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin >> n;
	t = n;

	int flag = 1;

	while(t > 0){
		int x = t %10;
		if(x != 4 && x != 7){
			flag  =  0;
			break;
		}
		else{
			t /= 10;
		}
	}

	if(flag == 1){
		cout << "YES" << endl;
	}
	else{
		if(n % 4 == 0 || n % 7 == 0 || n% 47 == 0 || n % 74 == 0 || n % 444 == 0 || n % 474 == 0 || n % 477 == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}
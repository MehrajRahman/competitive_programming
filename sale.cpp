
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a ,b;
	cin >> n >> a;


	vector<int > s(n);

	

	for(int i = 0; i < n ; i ++){
		cin >> s[i];

	}

	sort(s.begin(), s.end());

	int r = 0;
	vector<int>::iterator it  = s.begin(); 
	int count = 0;

	for( ; count < a; it++){
		*it <= 0?r += *it : r+=0;
		count++;

	}

	cout << abs(r);



	return 0;
}
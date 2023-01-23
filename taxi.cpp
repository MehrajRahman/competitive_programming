#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
	return a > b;
}

int main(){
	int n;
	cin >> n;
	vector <int> v(n);

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}


	int f = 0, t = 0, th = 0, o = 0;

	for(int i = 0; i < n; i++){
		if(v[i] == 4){
			f++;
		}
		if(v[i] == 3){
			th++;
		}
		if(v[i] == 2){
			t++;
		}
		if(v[i] == 1){
			o++;
		}
	}



	int car = 0;

	car += f;

	th>=o? o = 0: o = o - th;

	car += th;

	if(t % 2 == 1){
		if(o > 0){
			t = (t / 2) + 1;
			o -= 2;
		}
		else{
			t = (t / 2) + 1;
		}
	}
	else{
		t = (t / 2);
	}

	car += t;

	if(o > 0){
		car += ceil((o*1.0) / 4 );
	}


	cout << car << endl;




	


	


	

	
	

	return 0;
}
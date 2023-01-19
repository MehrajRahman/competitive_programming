#include <bits/stdc++.h>
using namespace std;


int main(){
	

		int n, m, a;
		cin >> n >> m >> a;

		double w, l;

		w = ceil((n*1.0)/ a);
		l = ceil((m*1.0)/ a);

		cout << fixed << setprecision(0)<<  w * l << endl;




		
		
	
	return 0;
}
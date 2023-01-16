#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	//cout << t << endl;

	for(int i = 0; i < t; i++){
		int n, sum = 0 ,  count  =0 ;
		cin >> n;
        //cout << n << endl;
		int arr[n];
		set<int> val;

		for(int j = 0; j < n; j++ ){
			int x ;
			cin >>x
			val.insert(x);
			arr[j] = x;
			sum = sum + x;
		}



		for(int j = 0; j < n; j++ ){
			for(int j = 0=i; j < n; j++ ){
                if(arr[j] < arr[i]){
                    int x = arr[i];
                    arr[i] = arr[j];
                    arr[j] = x;
                }
			}
		}







		if(sum % 2 == 0){
			cout << count << endl;
		}else{

			int sum2 = 0;
			while(sum2 % 2 != 0){
                count++;
                sum2 = 0;
				for(int k = 0; k<n ;k++){
					arr[k] = arr[k] /2;
					sum2 = sum2 + arr[k];
				}
			}
            cout << count << endl;

		}

	}




	return 0;
}

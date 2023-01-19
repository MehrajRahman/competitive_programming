#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){

		string a;
		cin >> a;

		int l = a.size();

		int ca = 0;
		int cb = 0;

		int flag = 0;
		for(int i = 0; i < l  ; ++i){
			if(a[i] == 'a'){
				if(a[i-1] == 'a'){
					ca += 2;
				}
				else{
					ca += 1;
				}

				cb = 0;

			}
			if(a[i] == 'b'){
				if(a[i-1] == 'b'){
					cb += 2;
				}
				else{
					cb += 1;
				}

				ca = 0;

			}

			if ( ca == 1 && a[i + 1] != 'a'){
				flag = 1;
				break;
			}
			if ( cb == 1 && a[i + 1] != 'b'){
				flag = 1;
				break;
			}
		}


		if(flag == 1){
			cout << "NO" <<endl;
		}
		else{
			cout << "YES" <<endl;
		}
	}



	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(12);
#define done cout<<"Successful\n";
#define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
   ll n, p = 0, m = 0, l, pp = 0;
   cin >> n;
   vector<int > v(n);

   for(int i = 0; i <n ; i++){
	   	int x;
	   	cin >> x;

	   	if((v[i -1 ] == x) && (x == -1)){
	   		m++;
	   	}
	   	if( x == -1){
	   		p++;
	   	}
	   	if(x == 1){
	   		pp++;
	   	}
	   	v[i] = x;

   }

   if(m >0){
   		pp += 2;
   		p -= 2;
   }
   else if( p == 0){
   		pp -= 2;
   		p += 2;
   }

   cout << pp - p << endl;


   
}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

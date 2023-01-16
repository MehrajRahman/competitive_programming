#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(6);
#define done cout<<"Successful\n";
#define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
   ll n, m, l;
   cin >> n >> m;
   l = m - n*2;
   if(l > 0){
     cout <<  n + (l / 4) << endl;
   }
   else if( l == 0){
      cout << n << endl;
   }else{
      cout << m / 2 << endl;
   }

}


int main(){
    fast;
    // ll t;
    // cin>>t;
    // while(t--){
      solve();
    // }
    
    return 0;
}

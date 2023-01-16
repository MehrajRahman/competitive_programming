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
   ll n;
   cin >> n;

   while(n--){
      ll a;
      cin >> a;

      if( a  % 2 == 0){

         cout <<( a / 2 )- 1 << endl;

      }else {
         cout <<( a / 2 ) << endl;

      }

   }









}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

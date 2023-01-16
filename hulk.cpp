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
   cin >> n ;
   string s;

   for(int i = 1; i <= n; i++){
      if(i %2 == 1 && i != n){
         s += "I hate that ";
      }
      else if( i %2 == 0 && i != n){
         s += "I love that ";
      }
      else if(i % 2 == 1 && i == n){
         s += "I hate it ";
      }
      else if(i % 2 == 0 && i == n){
         s += "I love it ";
      }
   }
   cout << s<< endl;


   


   


   


}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

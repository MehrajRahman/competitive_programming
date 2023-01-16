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
   ll n, status = 0;
   cin >> n ;
   ll arr[n];

   input(arr, n);


      for(ll i = 0; i < n; i++){
         if(arr[i] == 1){
            status = 1;
            break;
         }
      } 

      if(status == 1){
         cout << "HARD" <<endl;
      }   
      else{
         cout << "EASY" <<endl;
      }  


   


}


int main(){

    fast;
    int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

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
   ll n, count = 0;
   cin >> n ;
   ll arr[n], newArr[n];

   
   input(arr,n);

   for(ll i = 0; i < n; i++){
      newArr[arr[i] - 1] = i + 1;
         
   } 

   for(ll i = 0; i < n; i++){
      cout << newArr[i] << " " ;
         
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

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
   ll n, sum = 0;
   cin >> n ;
   // char arr[n][2];


   if(n % 2 == 0){
      cout << n / 2;

   }else{
      cout << (n/2 + 1)*-1;

   }



   

   // for(ll i = 0; i < n - 1; i++){
   //    if(arr[i][1] == arr[i + 1][0]){
   //       count++;
   //    }
         
   // } 
   // cout << sum << endl;

   // for(ll i = 0; i < n; i++){
   //    cout << newArr[i] << " " ;
         
   // } 

   


   


}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

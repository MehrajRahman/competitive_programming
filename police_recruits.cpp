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
   ll n, nofP = 0, unTC = 0;
   cin >> n;
   int arr[n];

   input(arr, n);

   for(int i = 0; i< n; i++){
      if(arr[i] > 0){
         if(arr[i] <= 10){
            nofP = nofP + arr[i];
         }else{
            nofP = nofP + 10;
         }
      }
      else{
         if(nofP > 0){
            nofP += arr[i];
         }else{
            unTC += (arr[i]) * (-1);
         }

      }
      
   }


   cout << unTC <<endl;


}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

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
   ll n, min, max, count = 0;
   cin >> n;
   int arr[n];

   input(arr, n);

   for(int i = 0; i< n; i++){
      if(i ==  0){
         min = arr[i];
         max = arr[i];
      }
      else{
         if(arr[i] > max ){
            count++;
            max = arr[i];
         }
         if(arr[i] < min){
            count++;
            min = arr[i];
         }

      }
   }


   cout << count <<endl;


}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

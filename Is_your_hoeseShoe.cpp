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

   int arr[4] ;

   input(arr, 4);
   int same = 0;

   for(int i = 0; i < 4; i++){
      for(int j = i + 1; j < 4; j++){
         if(arr[i] == arr[j] && arr[j]  != -1){
            same++;
            if(same == 3 ){
               break;
            }
         }
      }
      for(int j = i + 1; j < 4; j++){
         if(arr[i] == arr[j]){
            arr[j] = -1;
         }
      }
      if(same == 3 ){
            break;
      }
      
   }
   cout << same << endl;


   


   


   


}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

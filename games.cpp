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
   ll n, count = 0;
   cin >> n;
   ll arr[n][2];

   for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      arr[i][0] = x;
      arr[i][1]  =y;
   }

   for(int i = 0; i < n ; i++){
      for(int j = 0; j < n; j++){
         if(arr[i][0] == arr[j][1]){
            count++;
         }
      }
   }



   cout << count << endl;





}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

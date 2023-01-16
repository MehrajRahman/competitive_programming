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
   ll x, y, count = 1;
   cin >> x >> y;

   for(int i = 1; i <= x ; i++ ){
      for(int j = 1 ; j <= y ;j++){
         if(i % 2 == 1){
            cout << "#";
         }
         else{
            if(count % 2 == 1){
               if(j == y){
                  cout << "#";
               }else{
                  cout << ".";
               }

            }else{
               if(j == 1){
                  cout << "#";
               }else{
                  cout << ".";
               }

            }
            
         }
      }
      if(i % 2 == 0){
         count++;
      }
      cout << endl;

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

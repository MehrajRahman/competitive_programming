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
   ll a, b, c, max, min, mid, dist = 0;
   cin >> a >> b >> c;

   if( a > b){
      if(a > c){
         max = a;
      }
      else if(c > a){
         max = c;
      }
      if(b > c){
         min = c;
         mid = b;
      }
      else{
         min = b;
         mid = c;
      }
   }
   else{
      if(b > c){
         max = b;
      }
      else{
         max = c;
      }
      if(a > c){
         min = c;
         mid = a;
      }
      else{
         min = a;
         mid = c;
      }
   }


   dist = (max - mid ) + (mid - min);
   cout << dist << endl;


   
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

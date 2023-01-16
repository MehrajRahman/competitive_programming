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
   ll a, b, c, d, max;
   cin >> a >> b >> c >> d;

   if(a > b && a > c && a > d ){
      max = a;
   }
   else if( b > a && b > c && b > d){
      max = b;

   }else if( c > a && c > d && c  >a){
      max = c;
   }else{
      max  = d;
   }


   if(max != a ){
      cout << max - a << " ";
   }

   if(max != b){
      cout << max - b <<" ";
   }

   if( max != c){
      cout << max - c << " ";
   }

   if(max != d){
      cout << max - d << " ";
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

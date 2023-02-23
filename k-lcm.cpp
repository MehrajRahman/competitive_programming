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
   ll n, t;
   cin >> n >> t;

   int x, y, z;

   if(n  %  2== 0){
      if((n/2) % 2 == 0){
         x = n / 2;
         y = x / 2 ;
         z = x / 2;
         cout << x << " " << y << " " << z << endl;
         return;
      }
      else{
         x = n / 2 - 1;
         y = n / 2 - 1 ;
         z = 2;
         cout << x << " " << y << " " << z << endl;
         return;
      }

   }
   else{
      cout << n / 2 << " " << n / 2  << " "<< 1 << endl;


   }



   
   
}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

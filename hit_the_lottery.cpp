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
   ll n, count = 0,x;
   cin >> n;
   x = n;
   while (x > 0){
      if(x >= 100){
         count =count +  x/100;
         x = x % 100;  
         n = n % 100; 
      }
      else if( x >= 20 ){
         count = count + x/20;
         x = x % 20;
         n = n % 20; 
      }
      else if( x >= 10 ){
         count = count + x/10;
         x = x % 10;
         n = n % 10; 
      }
      else if( x >= 5 ){
         count = count + x/5;
         x = x % 5;
         n = n % 6; 
      }
      else{
         count = count + x;
         x = x - x;

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

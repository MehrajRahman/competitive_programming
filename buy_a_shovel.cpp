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
   // ll a , b, min, rm, max;
   string k, r  ;
   cin >> k >> r;

   int n = k.length(), x, y,s = 0, num = 0 ;

   x = k[n-1] - '0';


   for(int i  = n - 1;  i >= 0; i--){
      num += pow(10, (n-1-i))*(k[i] - '0');
   }

   // cout << num;

   while(true){
      s++;
      if((x * s) % 10 == 0 ){
         break;
      }
      

      if((num * s) % 10 == (r[0] - '0')){
         break;
      }
      


   }

   cout << s <<endl;







   
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

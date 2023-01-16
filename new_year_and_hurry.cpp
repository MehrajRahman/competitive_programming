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
   ll n, t, rt, count = 0,pr = 1, ct;
   cin >> n >> t;

   rt = 240 - t;
   while (rt > 0){
      if(n >= pr){
         ct = 5*pr;
         if(ct <= rt){
            rt -= ct;
            count++; 
         }


      }else{
         break;
      }
      pr++;






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

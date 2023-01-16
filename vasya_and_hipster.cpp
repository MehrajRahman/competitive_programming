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
   ll a , b, min, rm, max;
   cin >> a >> b;

   if(a > b){
      max  = a;
      min = b;
   }
   else{
      max  = b;
      min = a;
   }

   rm = max - min;

   cout << min << " " << rm / 2 <<endl;
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

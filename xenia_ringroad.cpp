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
   ll n,m , count = 0;
   cin >>n >> m;

   vector<pair<int , int>>v;
   ll l = 1, diff;

   for(int i = 0; i < m; i++){
      int x ;
      cin >> x;
      if(l <= x){
         diff = x - l;
      }
      else{
         diff = n - l + x;
      }

      l = x;

      v.push_back(make_pair(x, diff));


   }
   ll sum = 0;

   for(auto i : v){
      sum += i.second ;
   }

   cout << sum << endl;
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

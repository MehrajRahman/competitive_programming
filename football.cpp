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
   map <string , int>ma;
   int t;
   cin >> t;
   while(t--){
      string a;
   cin >> a;
   if(ma.count(a) == 0){
      ma.insert(make_pair(a,1));
   }
   else{
      ma[a] = ma[a] + 1;
   }

   }
   
   string b;
   int c = 0;


   for(auto const& p: ma){
     if(p.second > c){
      c = p.second;
      b = p.first;
     }
   }

   cout << b << nl;
   
      
}

int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

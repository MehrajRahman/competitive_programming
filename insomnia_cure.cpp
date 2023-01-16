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
   int k,l,m,n,d;
   cin >> k >>l >> n >> m >>d ;
   set <int> result;



   for(int i = k; i <= d; i += k  ){
      result.insert(i);
   }
   for(int i = l; i <= d; i += l  ){
      result.insert(i);
   }
   for(int i = m; i <= d; i += m  ){
      result.insert(i);
   }
   for(int i = n; i <= d; i += n  ){
      result.insert(i);
   }

   

   
   cout <<result.size() << endl;


}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

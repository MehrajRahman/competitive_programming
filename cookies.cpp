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
   ll a;
   cin >> a;
   vector<int > v;

   int e = 0, o = 0, s = 0;


   for(int i = 0;  i < a; i++){
      int x;
      cin >> x;
      s += x;
      if(x & 1){
         o++;
      }
      else{
         e++;
      }
      v.push_back(x);
   }

   if(s & 1){
      cout << o << endl;
   }
   else{
      cout << e << endl;
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

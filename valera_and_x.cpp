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
   vector<string > s;
   for(int i = 0; i < a; i++){
      string x;
      cin >> x;
      s.push_back(x);
   }
   if(s.size() ==( a )){
      auto i = s.begin();
      string test = *i;
      char m = test[0] ,  n= test[a/2] ;
      if(m == n){
         cout << "NO" << endl;
         return;
      }
      int x = 0 , y = a - 1;
      for(i  = s.begin() ; i !=s.end(); i++){
         string b;
         b = *i;
         if(b[x] == m && b[y] == m){
         }else{
            cout << "NO" << endl;
            return ;
         }
         for(int j = 0; j < a; j++ ){
            if(j != x && j != y){
               if(b[j] == n){

               }else{
                  cout << "NO" << endl;
                  return;
               }
            }
         }
         x++;
         y--;
      }
   }
   else{
      cout << "NO " << endl;
      return ;
   }
   cout << "YES" << endl;
}
int main(){
    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;
 
}
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
   cin >> a ;
   vector<int > v(a);
 
   int o = 0, e  = 0;
   for(int i = 0; i < a; i++){
      int x;
      cin >> x;
      if(x & 1){
         v[i] = 1;
         o++;
      }
      else{
         v[i] = 0;
         e++;
      }
   }
 
   if(o>=3 ){
       cout << "YES"<<endl;
      int kk = 0;
      for(int i = 0; i < a; i++){
         if(v[i] & 1){
            cout << i + 1 << " ";
           kk++;
         }
         if(kk== 3){
            cout << endl;
            break;
         }
      }
   }
   else if(e >= 2 && o >= 1){
      cout << "YES"<<endl;
      int kk = 0, oo = 0;
      for(int i = 0; i < a; i++){
         if(v[i] & 1 && oo < 1){
            cout << i + 1 << " ";
            oo++;
         }
         else if(v[i] %2 == 0 &&  kk < 2){
            cout << i + 1 << " ";
            kk++;
         }
         if(kk + oo == 3){
            cout << endl;
            break;
         }
      }
   } 
   else{
      cout << "NO" << endl;
 
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
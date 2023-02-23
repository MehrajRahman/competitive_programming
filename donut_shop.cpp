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
   ll p, a, p2;
   cin >> p >> a >> p2;

   double check = (p2*1.00)/ a;
   int val;
      if(p2 % p == 0){
         val = p2/ p - 1;
      }
      else{
         val = p2/ p ;
      }

   if(p2<p ){
      cout << -1 << " " << a << endl;
   }
   else if(p2 == p && check == p){
      cout << -1 << " " << -1 << endl;
   }
   else if(p2 == p){
      cout << - 1 << " " << a << endl;
   }
   else if(check < p){
      
      cout << val << " " << a << endl;
   }
   else if(check == p){
      
      cout << val << " " << -1 << endl;
   }
   else{
      cout << p << " " << -1 << endl;
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

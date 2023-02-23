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
   a > 0 ? a = a : a = a* -1;
   string b;
   string x = "0000000000000000";

   while(a > 0){
      if(a % 2 == 1){
         b.push_back('1');
      }
      else{
         b.push_back('0');
      }
      a /= 2;
   }
   int n = b.size();
   for (int i = 0; i < n / 2; i++)
        swap(b[i], b[n - i - 1]);
   cout << b << endl;
   int l= b.size() - 1;
   for (int i = 15; l >= 0; --i)
   {  
      x[i] = b[l];
      l--;     
   }
   int flag  = 0;
   for(int i = x.size() - 1; i >= 0; i--){
      if(x[i] == '1' && flag == 0){
         flag = 1;
      }
      else if(flag == 1){
         x[i] = !(x[i] - '0') + '0';
      }
   }
   cout << x << endl;

   
   
}
int main(){
    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;
 
}
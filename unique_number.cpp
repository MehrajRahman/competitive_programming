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
   int n;
   cin >> n;
   string result;
   if(n > 45){
      cout << -1 << nl;
   }
   else if(n < 10){
      cout << n << nl;
   }else{
      int sum  = 0;
      int x = 10;
      while(sum < n){
         --x;
         result.push_back(x+'0');
         sum += x;
      }
      if(sum > n){
         sum -= x;
         int l = result.size();
         int rem = n - sum;
         result[l-1] = rem+'0';

      }
      
      reverse(result.begin(), result.end());
      cout << result << nl;
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

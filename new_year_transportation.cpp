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
   ll n, t, c=0;
   cin >> n >> t;

   vector<pair<int,int>>v;
   v.push_back(make_pair(0, 1));
   vector<int > test(n);
   for(int i = 1; i <= n - 1; i++){
      int x, sum;
      cin >> x;
      sum = i + x;
      if(c==0 && sum == t){
         c = i;
      }

      v.push_back(make_pair(i, sum));
   }

   for(int i = 1; i < n; i++){
      test[i] = 0;
   }
   test[1] = 0;

   if(c > 0){
      int cc = 0;
      for(int i = 1; i <=n ; ){
         cc++;
         int y = v[i].second;
         if(y == t){
            cout << "YES" << endl;
            return;
         }
         test[i]++;
         i = y;
         if(test[i] > 1){
            cout << "NO" <<endl;
            return;
         }
      }
      cout << "NO" << endl;
      return;
   }else{
      cout << "NO" << endl;
      return ;
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

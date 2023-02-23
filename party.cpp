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
   ll n, m = 0;
   cin >> n;

   vector<int> v(n);


   for (int i = 0; i < n; ++i)
   {
      int x;
      cin >> x;
      if(x == -1){
         m++;

      }else{
         v[x]++;
      }

      /* code */
   }

   int s = 0;

   for (int i = 0; i < n; ++i)
   {
      /* code */
      if (v[i] > 0)
      {
         s++;
      }
   }

   if(m > 0){
      s++;
   }

   

   cout << s<< nl;

   

   
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

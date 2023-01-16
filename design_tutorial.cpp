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
   ll n;
   cin >> n;
   int low  = 4;
   int high = n - low;
   for(int j = low; j < n; j++ ){
      high = n  - j;
      int flag  = 0;
      for(int i = 2; i < j; i++  ){
         if(j % i == 0){
            flag = 1;
            break;
         }
      }
      int ref=0;
      for(int i = 2; i < high; i++  ){
         if(high % i == 0){
            ref = 1;
            break;
         }
      }
      if(flag == 1 && ref == 1){
         cout << j << " " << high << endl;
         break ;
      }
   }
}
int main(){
    fast;
    solve();
    return 0;

}

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
   ll n, sum = 0, flag = 0;
   cin >> n ;
   ll arr[n];
   input(arr, n);

   sum = arr[0]*arr[1];
   for(int i = 0; i< n ;i++){
      if(arr[i] != 1){
         flag++;
      }
   }

   for(int i = 2; i < n ; i++){
      sum =  sum * arr[i];
      

   }
   sum = sum + n - 1;

  
   cout << 2022 * sum << endl;
   


}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

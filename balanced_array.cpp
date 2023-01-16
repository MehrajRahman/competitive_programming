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
   unsigned long long n, sum = 1, flag = 0, o = 3;
   cin >> n ;
   

   // for(int i = 2; i <= n ; i++){
   //    sum =  sum + i * o;
   //    o += 2;
      

   // }
   sum = (2* n* (n+1)*(2*n + 1)*1.00) / 6  - (n * (n + 1)*1.00)/2;

   // cout << sum <<endl;

  
   cout <<( 2022% 1000000007  * sum% 1000000007 ) << endl;
   


}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

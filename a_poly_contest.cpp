#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(6);
#define done cout<<"Successful\n";
#define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
   int n, sum;
   cin >> n;
   string a,b;
   cin >> a;
   sum = a[0] + '0' - 96;
   
   for( int i = 0; i < n - 1 ; i++){
      if(  (sum == 1 && a[i+1] == '1') ){
         b = b + '-'; 
         sum = sum  - (a[i + 1] + '0' - 96);
      }
      else{
         b = b + '+';
         sum = sum + (a[i + 1] + '0' - 96);
      }
   }

   cout << b << endl;

}


int main(){
    fast;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

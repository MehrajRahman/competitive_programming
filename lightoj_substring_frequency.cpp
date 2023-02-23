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

void solve(int x){

   
      string a;
      cin >> a;
      string b;
      cin >> b;

      int l, m;
      l = a.size();
      m = b.size();

      string c;
      int count = 0;
      for(int i = 0; i <= l-m;++i){
         c = a.substr(i, m);
         int status = 0;
         for(int j = 0; j < m; j++){
            if(b[j] != c[j]){
               status = 1;
               break;
            }
         }
         if(!status){
            count++;

         }
      }

      cout <<"Case " << x << ": " <<count << nl;


  

   
}


int main(){

    fast;
    int t;
    cin>>t;
    int x = 1;
    while(t--) {solve(x); x++;}
    // solve();
    return 0;

}

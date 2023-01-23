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
   string a, r;
   cin >> a;

   int l = a.size();
   r.push_back(a[0]);
   int count = 0;
   for(int i = 1; i < l ; i++){
      if(a[i]  == r[count]){
         
      }
      else{

         r.push_back(a[i]);
         count++;
      }
   }


   cout << r <<endl;



  

   
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

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
   int t;
   cin >> t;
   for(int i = 0; i <t ;++i)
   {
      string a;
      cin >> a;
      string b;
      if(a[4] != 's'){
         for(int i = 0; i < a.size(); i++){
            if(i == 4){
               b.push_back('s');
               b.push_back(a[i]);
            }
            else{
               b.push_back(a[i]);
            }
         }

         cout << "Case" << " " << i + 1 <<": "<< b << nl;
      }else{
         cout << "Case" << " " << i + 1 <<": "<< a << nl;

      }
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

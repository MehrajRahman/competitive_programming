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
   string a;
   cin >> a;

   int l = a.size(), flag = 0;

   if(a[0] == '4'){
      flag = 1;
   }

   for(int i = 0 ; i < l ; ++i){
      if(a[i] == '1' || a[i] == '4'){
         
      }
      else{
         flag = 1;
      }
   }

   if(flag == 0){
      
      for(int i = 0 ; i < l ; ++i){
         if(a[i] == '4'){
            int c4 = 1;
            for(int j = i+ 1; j< l; j++ ){
               if(a[j] == '4'){
                  c4++;
               }
               else{
                  break;
               }
            }
            if(c4 > 2){
               flag = 1;
               break;
            }
         }
      }
   }


   if(flag == 1){
      cout << "NO" << nl;
   }
   else{
      cout << "YES" << nl;
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

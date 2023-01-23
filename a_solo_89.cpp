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
   ll n1,n2,n3,n4, c1=0, c2 = 0, c3 = 0, c4 = 0;

   cin >> n1 >> n2 >> n3 >> n4;

   if(n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1){
      c1++;
   }
   if(n2 == 4 || n1 == 4 || n3 == 4 || n4 == 4){
      c2++;
   }
   if(n3 == 7 || n1 == 7 || n2 == 7 || n4 == 7){
      c3++;
   }
   if(n4 == 9 || n1 == 9 || n2 == 9 || n3 == 9){
      c4++;
   }

   if(c1 == 1 && c2 == 1 && c3 == 1 && c4 == 1){
      cout << "YES" <<endl;
   }else{
      cout << "NO" << endl;
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

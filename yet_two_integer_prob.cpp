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
   ll a, b , count = 0;
   cin >>a >> b;

   if(a > b){
      while(a != b){
         count++;
         int x = a - b;
         if( x > 10){
            int m = x / 10;
            a = a - m * 10;
            count += m;
            count--;
         }
         else{
            a -= x;
         }
      }

      cout << count << endl;

   }
   else if(b > a){
      while(a != b){
         count++;
         int x = b - a;
         if( x > 10){
            int m = x / 10;
            a = a + m * 10;
            count += m;
            count--;
         }
         else{
            a += x;
         }
      }
       cout << count << endl;


   }else{
      cout << 0 << endl;
   }



  

   
}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

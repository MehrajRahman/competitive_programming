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
   cin >>n;
   cout << n << endl;

   int a = 0, b = 0;
   n--;
   a++;
   int t = 0;
   int x = 2;
   cout << n << endl;
   while(n > 0){
      cout << n << endl;
       t++;
      if(t <= 2){
         if(n < x){
            b += n;
            n -= n;
            x++;
         }else{
            b += x;
            n -= x;
            x++;
         }
         
       


      }else if(t >2 && t <= 4 ){
         if(n < x){
            a += n;
            n -= n;
            x++;
         }else{
            a += x;
            n -= x;
            x++;
         }


      }


      if(t == 4){
         t = 0;
      }

   }

   cout << a << " " << b << nl;
   



  

   
}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

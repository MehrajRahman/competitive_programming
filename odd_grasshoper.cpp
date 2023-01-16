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
   ll x,  n,  first;
   cin >>x >>n;

   long double sTwo, sThree, sFour, sFive,
   rs = 0,tn = 0 , thn = 0, fin = 0, fn = 0;

   // cout << "N is : " << n << endl;

   if(n > 0){
      first = 1;
   }else{
      first = 0;
   }


   if(n >= 2){
      tn = (n - 2 )/4  + 1;
   }
   if(n >= 3 ){
      thn= (n - 3 )/4 + 1;
   }
   if(n >= 4){
      fn = (n - 4 )/4 + 1;
   }
   if(n >= 5){
      fin = (n - 5 )/4 + 1;
   }

   sTwo = ((tn)/ 2)*(2 * 2 + (tn - 1) * 4);
   sThree = ((thn)/ 2)*(2 * 3 + (thn - 1) * 4);
   sFour = ((fn)/ 2)*(2 * 4 + (fn - 1) * 4);
   sFive = ((fin)/ 2)*(2 * 5 + (fin - 1) * 4);

   cout << sTwo << " " << sThree << " " << sFour << " " << sFive <<endl; 

   if(x %2 == 0){
      rs = x - first + sTwo + sThree - sFour - sFive;
   }else{
      rs = x + first - sTwo - sThree + sFour+ sFive;
   }   
   cout << fixed <<setprecision(0) << rs << endl;

}


int main(){
    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

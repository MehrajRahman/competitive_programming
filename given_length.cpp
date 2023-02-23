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
   ll n, x;
   cin >> n >> x;

   
   ll nOfnines = x / 9;
   if(nOfnines > n){
      cout << -1 << " " << -1 << endl;
      return;
   }
   
   string a;
   string rev;
   for(int i = 0; i < nOfnines; i++ ){
      a.push_back('9');
   }
   int rem = x % 9;

   if(rem == 0 ){

   }else if(a.size() < n){
      a.push_back( rem + '0');
   }

   for(int i = a.size(); i < n ; i++){
      a.push_back('0');
   }

   rev = a;
   reverse(rev.begin(), rev.end());

   int flag = 0;
   for (int i = 0; i < rev.size(); ++i)
   {
      if(rev[0] - '0' > 0){
         flag = 1;
         break;
      }
      else{
         if(rev[i] - '0' > 0){
            rev[i] = (rev[i] - '1') + '0' ;
            break;
         }
      }
   }

   if(flag == 0 && n > 1){
      rev[0] = '1';
   }

   int checkSum = 0;
   for (int i = 0; i < rev.size(); ++i)
   {
      checkSum += rev[i] - '0';
   }

   if(checkSum == x){
      cout << rev << " " << a << endl;
   }
   else{
      cout << -1 << " " << -1 << endl;
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

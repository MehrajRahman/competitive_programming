
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
   ll n, k, min,mini = 0, diff, status = 1;
   cin >> n >> k;
   ll ah[n],ap[n];

   input(ah, n);
   input(ap, n);
   cout << "Hello " << endl;

   while (status == 1){
      cout << "Enetred" << endl;
      for(ll i = 0; i < n; i++){
         if(i = 0){
            if(ah[i] - k > 0){
               min = ah[i] - k;
               ah[i] = ah[i] - k;
               cout << "Ah[i]" << ah[i]<< endl;
            }
            else{
               diff = ah[i] - k;
               if(diff > 0){
                  ah[i] = diff;
               }
               else{
                  ah[i] = 0;
               }
               if(diff < min){
                  min = diff;
                  mini = i;
               }
            }
         }
      }

      k = k - ap[mini];
      if( k <= 0){
            break;
      }
      int flag = 0;
      for(int i = 0; i < n; i++ ){
         if(ah[i] > 0){
            flag = 1;
            break;
         }
      }

      if(flag == 0){
         status = 0;
      }
      status = 0;
   }



   if(k > 0 || status == 0){
      cout << "YES" <<endl;
   }else{
      cout << "NO" <<endl;
   }

}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;

}

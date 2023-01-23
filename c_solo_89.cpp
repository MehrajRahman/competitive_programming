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
   int n, s;
   cin >> n >> s;

   int arr[n];
   for(int i = 0; i < n; i++){
      cin >> arr[i];
   }
   int lst = 0,status = 1, flag = 1; 
   while(status){
      for(int i = 0; i < n; i++){
         if(arr[i] > 0 && (arr[i] - s) <= 0){
            arr[i] = -1;
            lst = i;
         }else if(arr[i] > 0){
            arr[i] = arr[i] - s;
         }

      }
      flag = 0;
      for(int i = 0; i < n; i++){
         if(arr[i] > 0 ){
            flag = 1;
            break;
         }

      }

      if(flag == 0){
         status = 0;
         break;
      }
   }

   cout << lst + 1 << endl;


  

   
}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

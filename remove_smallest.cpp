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
   ll n, min,minI= 0, count = 0, val, valC = 0;
   cin >>n;
   vector<int> arr;
   for(int i = 0; i< n ;i++){
      int x;
      cin >> x;
      arr.push_back(x);
   }

   for(int i = 0; i < n-1; i++){
      for(int j = i+1; j<n;j++){
         if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
         }
      }
   }

   for(int i = 0; i< n - 1;i++){
      if(arr[i] != -1){
         for(int j = i+ 1; j<  n; j++ ){
            if(arr[j] != -1){
               int diff = abs(arr[i] - arr[j]);
               if(diff == 0 || diff == 1){
                  arr[i] = -1;
               }
            }        
         }
      }
   }


   for(int i = 0; i< n ;i++){
      if(arr[i] != -1){
         count++;
      }
   }

   if(count > 1){
      cout << "NO" <<endl;
   }else{
      cout << "YES" <<endl;
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

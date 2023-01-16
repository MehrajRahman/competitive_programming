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
   // ll a , b, min, rm, max;
   int n, count  = 0;

   string a;
   cin >> a;


   int arr[100];

   n = a.length();

   for(int i = n - 1; i >= 0; i--){
      int x = a[i] - '0';
      
      if(i == 0){
         int y = x * pow(10, (n - 1) - i);
         arr[count] = y;
         count++;

      }
      else{
         if(x != 0){
            int y = x * pow(10, (n - 1) - i);
            arr[count] = y;
            count++;

         }

      }

   }
   cout << count  << endl;
   for(int i = 0; i < count; i++ ){
      cout << arr[i] << " ";
   }
   cout << endl;


   
}


int main(){

    fast;
    int t;
    cin>>t;
    while(t--) solve();
    // solve();
    return 0;

}

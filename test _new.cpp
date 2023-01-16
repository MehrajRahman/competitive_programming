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
   ll n, k, count = 0;
   cin >> n >> k;
   int arr[n];
   input(arr, n);


   int s = sizeof(arr) / sizeof(arr[0]);
   int r = 5 - k;

   sort(arr, arr + n);


   for(int j = 0; j < n; j++ ){
      if(arr[j] <= r ){
        count++;
      }
      else{
        break;
      }
   }

   cout << count / 3  << endl;

}
int main(){
    fast;
    solve();
    return 0;

}


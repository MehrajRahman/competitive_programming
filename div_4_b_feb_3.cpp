// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define precision cout << fixed << setprecision(12);
// #define done cout<<"Successful\n";
// #define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
// #define print(x) cout<< #x <<" = "<< x<<"\n";
// #define nl "\n"
// #define sp " "
// #define all(v)      (v).begin(), (v).end()
// #define loop(n) for (long long i = 0; i < n; i++)

#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<iomanip>
// #include <bits/stdc++.h>
#define ll long long
#define loop(n) for (long long i = 0; i < n; i++)
#define loop1(n) for (long long j= 0; j <n; j++)
#define ts ll t; cin>>t; while(t--)
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(v)      (v).begin(), (v).end()
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define el      "\n"
using namespace std;



// vector<int> v;

// int binary(int s, int r, int k){
//    ll l =0;
//    ll mid;
//    ll ans=0;
//    while(l<=r){
   
//       mid = l +(r-l)/2;
 
//        if(v[mid]<=k){
//             ans=mid+1;
//             l=mid+1;
//          }
//          else {
//          r=mid-1;
//          }}
//          return ans;
   
// }

void solve(){
   int l;
   cin >> l;
   string a;
   cin >> a;

   int u = 0, r = 0, flag = 0;

   for(int i = 0; i < l; ++i){
      if(a[i] == 'U'){
         u++;
      }
      else if(a[i] == 'D'){
      	u--;
      }
      else if(a[i] == 'R'){
      	r++;
      }
      else if(a[i] == 'L'){
      	r--;
      }

      if(u == 1 && r == 1){
      	cout << "YES" << el;
      	flag = 1;
      	break;
      }
   }
   if(flag == 0){
      cout << "NO" << el;
   }
   
}

int main(){
    fast;
    int  t;
    cin >> t;
    while(t--){
      solve();
    }
    return 0;
}


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

   int c = 0, r = 0, flag = 0;



   for(int i = 0; i < l; ++i){
   	  if(l%2 == 0){
   	  	if(a[i] == a[l-i-1]){
   	  		// cout << i << " " << a[i] << " " << a[l-i-1] << el;
	         c = i;
	         break;
      	}
   	  }else{
   	  	if( a[i] == a[l-i-1]){
         c = i;
         break;
      	}

   	  }
   	  if(i == l-1){
   	  	  // cout << "c is: " << c << el;
   	  	cout << 0 << endl;
   	  	flag = 1;
   	  }
      
     
   }
   // cout << "c is: " << c << el;
   
      if(flag == 0){
      	cout << l - 2*c  << el;
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


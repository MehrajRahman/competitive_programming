
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
#include <bits/stdc++.h>
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

bool comp(pair<int ,int > p, pair<int  ,int >b){
   return (p.first + p.second < b.first + b.second);
}
 
void solve(){
   ll n , c;
   cin >> n >> c;
   vector<int>v(n);
 
   for(int i = 0; i < n; i++){
      cin >> v[i] ;
   }
 
   sort(v.begin(), v.end(), comp);
   int t = 0;
 
   while(c > 0){
     
      c -= v[t];
      if(c >= 0){
         t++;
      }
 
      for(int i = 0; i <= t ; ++i){
         c-= v[i];
      }
   }
 
   cout << t  << el;
 
  
   
   
   
   
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
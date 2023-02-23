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



vector<int> v;

int binary(int s, int r, int k){
   ll l =0;
   ll mid;
   ll ans=0;
   while(l<=r){
   
      mid = l +(r-l)/2;
 
       if(v[mid]<=k){
            ans=mid+1;
            l=mid+1;
         }
         else {
         r=mid-1;
         }}
         return ans;
   
}

void solve(){
   int n;
   cin >> n;
   vector<int> que;
   for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      v.push_back(x);
   }

   sort(v.begin(), v.end());
   int q;
   cin >> q;
   for(int i = 0; i < q; ++i){
      int x;
      cin >> x;
       int res = binary(0, v.size() - 1, x);
       cout << res <<el;
   }

}

int main(){
    fast;
    solve();
    return 0;
}


// vector<ll>v;
// ll solve(ll num){
//    ll r=v.size()-1;
//    ll l =0;
//    ll mid;
//    ll ans=0;
//    while(l<=r){
   
//       mid = l +(r-l)/2;
 
//        if(v[mid]<=num){
//             ans=mid+1;
//             l=mid+1;
//          }
//          else {
//          r=mid-1;
//          }}
//          return ans;}
      
 
// int main(){
//    fast;
//    ll m,n,x;
//    cin>>m;
//    // for(int i = 0; i < m;++i){
//    //    int x;
//    //    cin >> x;
//    //    v.push_back(x);
//    // }
//       v.resize(m);

//    loop(m) cin>>v[i];
//    sort(all(v));
//    cin>>n;
//    loop(n){
//      cin>>x;
//      cout<<solve(x)<<el;} 
//     return 0;}



// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #include<string>
// #include<vector>
// #include<map>
// #include<stack>
// #include<queue>
// #include<set>
// #include<iomanip>
// #define ll long long
// #define loop(n) for (long long i = 0; i < n; i++)
// #define loop1(n) for (long long j= 0; j <n; j++)
// #define ts ll t; cin>>t; while(t--)
// #define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define all(v)      (v).begin(), (v).end()
// #define yes         cout<<"YES"<<endl
// #define no          cout<<"NO"<<endl
// #define el      "\n"
// using namespace std;


// vector<ll>v;
// ll solve(ll num){
//    ll r=v.size()-1;
//    ll l =0;
//    ll mid;
//    ll ans=0;
//    while(l<=r){
   
//       mid = l +(r-l)/2;
 
//        if(v[mid]<=num){
//             ans=mid+1;
//             l=mid+1;
//          }
//          else {
//          r=mid-1;
//          }}
//          return ans;}
      
 
// int main(){
//    fast;
//    ll m,n,x;
//    cin>>m;
//    v.resize(m);
//    loop(m) cin>>v[i];
//    sort(all(v));
//    cin>>n;
//    loop(n){
//      cin>>x;
//      cout<<solve(x)<<el;} 
//     return 0;}

// ll GCD(ll a,ll b){
//       if(b==0)
//       return a;
//       return GCD(b,a%b);}
// vector<ll> getdivisors(ll n){
//    ll i=1;
//    vector<ll>v;
//    for(;i*i<n;i++)
//    if(n%i==0)
//    v.push_back(i),v.push_back(n/i);
//    if(i*i==n)
//    v.push_back(i);
//    return v;}
// ll fact(ll r)
// {
//     ll fact=1;
//    for(ll i=2;i<=r;i++)
//    fact*=i;
//    return fact;}
// ll ncr(ll n,ll r){
// return fact(n)/(fact(r)*fact(n-r));}
 
 
 
 
// bool sortbysec(pair<ll,double>a,pair<ll,double>b){
      
//       return(a.second>b.second||(a.second==b.second&&a.first<b.first));}   
      
// vector<ll> seive(ll n){
// n++;
//    vector<ll>v(n);
//    loop(n){
//    v[i]=1;}
//    v[0]=0; v[1]=0;
//    for(ll i=2;i*i<n;i++){
//       if(v[i]==1){
//          for( ll j=2;i*j<n;j++){
//    //       cout<<i*j<<endl;
//          v[i*j]=0;}}}
//          return v;}  
// bool is_prime(ll n){
//    for(ll i=2;i*i<=n;i++){
//       if(n%i==0)
//       return 0;}
//       return 1;}
// bool cmp(pair<ll,ll>x,pair<ll,ll>y){
// return x.first < y.first || (x.first == y.first && x.second > y.second);}

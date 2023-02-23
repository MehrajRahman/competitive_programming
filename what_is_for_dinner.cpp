// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
// #define precision cout << fixed << setprecision(12);
// #define done cout<<"Successful\n";
// #define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
// #define print(x) cout<< #x <<" = "<< x<<"\n";
// #define nl "\n"
// #define sp " "
 
// // void solve(){
//    ll n,m,k;
//    cin >> n >> m >> k;
//    set<pair<int, int>, greater<pair<int, int>>> s;
//    map<int, int> ma;
//    for(int i = 0; i < n; i++){
//       int x, y;
//       cin >> x >> y;
//       s.insert(make_pair(x,y));
//    }

//    int sum  = 0;


//    for(auto i : s){
//       ma[i.first] = i.second;
//    }


//    // map<string, int>::iterator it;
//    for (auto const& x : ma)
//    {
//        sum += x.second;
//        if(sum >= k){
//          cout << k << endl;
//          return;
//        }
//    }


//    cout << sum << endl;
   
// }
// int main(){
//     fast;
//     // int t;
//     // cin>>t;
//     // while(t--) solve();
//     solve();
//     return 0;
 
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m, k, sum = 0;
//     cin >> n >> m >> k;
//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int a, b;
//         cin >> a >> b;

//         if (mp.count(a) == 0)
//         {
//             mp[a] = b;
//         }
//         else
//         {
//             mp[a] = min(mp[a], b);
//         }
//     }
//     for (auto pr : mp)
//     {
//         sum += pr.second;
//     }
//     if (sum > k)
//     {
//         cout << k;
//     }
//     else
//         cout << sum;
// }


//Bismillahir_Rahmanir_Raheeem
#include <bits/stdc++.h>
using namespace std;
 
//Main 
#define     ll                              long long;
#define     checkmate                       return 0;
#define     in_range(i,x,y)                 for(int i=x;i<y;i++);
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--);
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
const int M = 1e9+7;
#define N 1000000000
 
int main(int argc, char const *argv[]){
    fastread();
    int n,m,k,sum=0;
    cin >> n >> m >> k;
    map <int , int> mp;
    while(n--){
        int x,y;
        cin >> x >> y;
        if(mp[x]  y)
            mp[x]=y;
    }
    for(auto it : mp){
        sum += it.second;
        //cout << it.first << " " << it.second << endl;
    }
    if(sum < k) cout << sum;
    else cout << k;
}
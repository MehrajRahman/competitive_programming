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
   ll a;
   cin >> a ;
   vector<int > v(a);
   set<int> s;

   int c = 0;
 
   for(int i = 0; i < a; i++){
      int x;
      cin >> x;
      v[i] = x;
      s.insert(x);
      if(x != 0) c++;

   }

   sort(v.begin(), v.end());

   
   if(a > c){
      cout << c << endl;
   }
   else if(v.size() > s.size()){
      cout << c << endl;

   }
   else{
      cout << c + 1 << endl;
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
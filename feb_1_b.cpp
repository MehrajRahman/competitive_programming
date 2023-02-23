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
   ll n, m ,d;
   cin >> n >> m >> d;
   map<int, int > ma;
   vector<int> p;

   for(int i = 1; i <= n ; i++){
	   	int x;
	   	cin >> x;
         ma.insert(make_pair(x, i));
	   	

   }
   for(int i = 1; i <= m ; i++){
         int x;
         cin >> x;
         p.push_back(x);
         

   }

   int max = 0 ;
   for(int i = 0; i < m - 1; i++){
      int diff = abs(ma[p[i]] - ma[p[i + 1]]);
      if(ma[p[i]] - ma[p[i + 1]] > 0){
         
      }
      else{
         if(diff > max){

            max = diff;
            
         }
      }
      // cout << max << endl;
      
   }
   if(max > 0){
      if(max + d > n + 1){
         cout <<  max <<  endl;
      }
      else{
         cout << d -  max + 1<<  endl;
      }
   }
   else{
      cout << 0 << endl;
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

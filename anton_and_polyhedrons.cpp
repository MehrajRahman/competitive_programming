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
   ll n, count = 0;
   cin >> n;
   string buffer;
   getline(cin, buffer);
   while(n--){
      string shape;
      getline(cin, shape); 
      if(shape == "Icosahedron"){
         count += 20;
      }
      else if( shape == "Dodecahedron"){
         count += 12;
      }
      else if(shape == "Octahedron"){
         count += 8;
      }
      else if(shape == "Cube"){
         count += 6;
      }
      else if(shape == "Tetrahedron"){
         count += 4;
      }
   }

   cout << count << endl;








}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

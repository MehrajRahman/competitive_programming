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
   int n;
   cin >> n;
   int p;
   cin >> p;

   int arrx[p];
   set<int>result;
   input(arrx, p);

   int q;
   cin >> q;
   int  arry[q];


   input(arry, q);
   int same = 0;

   for(int i = 0; i < p; i++){
      result.insert(arrx[i]);
   }
   for(int i = 0; i < q; i++){
      result.insert(arry[i]);
   }


  //  set<int>::iterator itr;
   
  // // Displaying set elements
  // for (itr = result.begin();itr != result.end(); itr++)
  // {
  //   cout << *itr << " ";
  // }


  if(result.size() == n){
      cout << "I become the guy." << endl;
  }else{
   cout << "Oh, my keyboard!" << endl;
  }

}


int main(){

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;

}

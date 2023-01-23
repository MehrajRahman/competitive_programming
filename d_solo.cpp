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
   cin >> n ;
   string a;
   cin >> a;
   int t = n;

   for(int i = 0; i < n - 1; i++){
      if(a[i] == '>' && a[i + 1] == '<'){
         t--;
      }
      if(a[i] == '<' && a[i + 1] == '>'){
         t--;
      }
   }

   if(n==2 && t ==1 ){
      cout << 0 << endl;
   }else{
      cout << t << endl;
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

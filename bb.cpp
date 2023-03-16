#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define precision cout << fixed << setprecision(12);
#define done cout << "Successful\n";
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define print(x) cout << #x << " = " << x << "\n";
#define nl "\n"
#define sp " "

void solve()
{
   int n;
   string a;
   cin >> n >> a;
   vector<int>v;
   for(int  i = 0; i < a.size(); i++){
        int c = 1;
        if(a[i] == 'B'){
            for(int j = i + 1; j < n; ++j){
                if(a[j] == 'B'){
                    c++;
                }else{
                    
                    break;
                }
            }
            v.push_back(c);
            i+= c - 1;
        }
   }

   if(v.size() < 1){
    cout << 0 << endl;
   }else{
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
    cout << v[i] << " " ;
   }
   cout << endl;
   }
}

int main()
{

    fast;
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}

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

    string a;
    int n, soi = -1, sni = -1,eni = -1,eoi = -1, o = 0, c= 0, d = 0, fo = 0, ro = 0;
    cin >> a;
    n = a.size();

    // if(a[0] == '1' && a[n-1] == '1'){
    //     for(int i = 1; i < n; ++i){
    //         if(a[i] == '0'){
    //             o++;
    //         }
    //     }
    // }

        for(int i = 0; i < n; ++i){
            if(a[i] == '0' && soi == -1 ){
                soi = i;
            }
            if(a[n - i - 1] == '0' && eoi == -1 ){
                eoi = n - i - 1;
            }
            if(a[i] == '1' && sni == -1 ){
                sni = i;
            }
            if(a[n - i - 1] == '1' && eni == -1 ){
                eni = n - i - 1;
            }
            
        }

        for(int i = sni; i < eni; ++i){
            if(a[i] == '0'){
                o++;
            }
        }

        cout << "sni: " <<sni << " " << eni << endl;

        for(int i = soi; i < eoi ; ++i){
            if(a[i] == '1'){
                d++;
            }
        }

        for(int i = 0; i <= eni; ++i){
            if(a[i] == '0'){
                fo++;
            }
        }

        for(int i = n - 1; i >= sni; --i){
            if(a[i] == '0'){
                ro++;
            }
        }



        cout << min(o,min(fo, min(d, ro))) << endl;
    
   
}

int main()
{

    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

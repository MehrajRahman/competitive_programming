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
    string a, b= "010", cc = "101";
    int c = 0, n, o = 0, j = 0, k = 0;
    cin >> a;

    n = a.size();

    for(int i = 0; i < n; ++i){
        if(a[i] == b[j]){
            j++;
        }
        if(a[i] == cc[k]){
            k++;
        }
    }
    if(j >= 3 || k >= 3){
        for(int i = 0; i < a.size(); ++i){
            if(a[i] == '1' ){
                c++;
            }
            if(a[i] == '0' ){
                o++;
            }
        }
        if(n < 3){
            cout << 0 << endl;
        }
        else if(c == 1 ){
            if(a[0] =='1' || a[n - 1] =='1'){
                cout << 0 << endl;
            }
            else{
                cout << 1 <<endl;
            }
        }else{
            if(o < 1){
                cout << 0 << endl;
            }
            
            else{
                if(a[0] == '1' || a[n - 1] =='1'){
                cout << c - 1 << endl;
                }
                else{
                    cout << c <<endl;
                }
            }
        
        }   

    }else{
        cout << 0 << endl;
    }
    


    
    
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

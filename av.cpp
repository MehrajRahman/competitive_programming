#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef map<int, int> mi;
typedef map<char, int> mc;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define nl "\n"
#define sp " "

ll sq_rt(ll x)
{
    ll lo = 1, hi = 1e10;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2ll;
        if (mid * mid == x)
            return mid;
        else if (mid * mid > x)
            hi = mid - 1ll;
        else
            lo = mid + 1ll;
    }
    assert(false);
}

void solve()
{
    int n, min;
    cin >> n;
    vi v;
    si s;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        v.PB(x);
    }
    sort(v.begin(), v.end());
    
    if(n == 2){
        cout << v[1] << nl;
        return;
    }

    REP(i, 0, n - 1)
    {
        REP(j, i + 1, n)
        {
            int gcd = __gcd(v[i], v[j]);
            // cout << gcd << nl;
            s.insert(gcd);
            if (i == 0 && j == 1)
            {
                min = gcd;
            }
            else if (gcd < min)
            {
                min = gcd;
            }
        }
    }
    set<int>::iterator it;
    it = s.begin();
    ++it;
    int c = 0;
    
    REP(i,0,n){
        if(v[i] % *it != 0){
            c++;
        }
    }
    if(c == 1){
        cout << *it << nl;
    }else{
        --it;
        cout << *it << nl;
    }
}

int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    solve();
    return 0;
}
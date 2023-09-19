/* ...Bismillahir Rahmanir Raheem... */

/*
Author:  Zunayed
Date:    2023-August-16
Time     8:01pm
Problem: A_Sagheer_and_Nubian_Market
*/
#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);
#define nl cout << endl;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define ld long double
#define lp(i, a, n) for (ll i = a; i < n; i++)
#define rlp(i, n) for (int i = (int)n - 1; i >= 0; i--)
#define mem(a, b) memset(a, (b), sizeof(a))
#define sortAll(x) sort(x.begin(), x.end())
#define all(a) (a).begin(), (a).end()
#define out(x) cout << x << endl;
#define pb(x) push_back(x)
#define coutarr(x, n)                \
    for (int i = 0; i < (int)n; i++) \
        cout << x[i] << " ";         \
    cout << endl;
#define cinarr(x, n)                 \
    for (int i = 0; i < (int)n; i++) \
        cin >> x[i];
#define cin2d(arr, n, m)            \
    for (int i = 0; i < n; i++)     \
    {                               \
        for (int j = 0; j < m; j++) \
            cin >> arr[i][j];       \
    }
#define cout2d(arr, n, m)             \
    for (int i = 0; i < n; i++)       \
    {                                 \
        for (int j = 0; j < m; j++)   \
        {                             \
            cout << arr[i][j] << " "; \
        }                             \
        cout << endl;                 \
    }
#define coutvec(vec)                    \
    for (ll i = 0; i < vec.size(); i++) \
        cout << vec[i] << " ";          \
    cout << endl;
#define cinArrSum(arr, n, sum) \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i], sum += arr[i];
#define hmm(ok) cout << (ok == 1 ? "YES" : "NO") << endl;
const ld PI = 3.141592653589793238462;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    cinarr(a, n);
    int lo = 0, hi = n;
    ll cost = 0, index = 0;
    vector<ll> check;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        vector<ll> keep;
        ll sum = 0;
        lp(i, 0, n)
        {
            keep.pb(a[i] + ((i + 1) * mid));
        }
        sortAll(keep);
        lp(i, 0, mid)
        {
            sum += keep[i];
        }
        check.pb(sum);
        if (sum <= s)
        {
            cost = sum;
            index = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    // coutvec(check);
    out(index << " " << cost);
}
int main()
{
    faster;
    int testcase = 1;
    // cin>>testcase;
    ll i = 1;
    while (testcase--)
    {
        // cout<<"Case "<<i++<<": ";
        solve();
    }
}
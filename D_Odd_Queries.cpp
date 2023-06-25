// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// typedef set<int> si;
// typedef map<int, int> mi;
// typedef map<char, int> mc;

// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cout.tie(nullptr);            \
//     cin.tie(nullptr);
// #define input(gggg, n)             \
//     for (int xd = 0; xd < n; xd++) \
//         cin >> gggg[xd];
// #define REP(i, a, b) for (int i = a; i < b; ++i)
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define nl "\n"
// #define sp " "

// ll sq_rt(ll x)
// {
//     ll lo = 1, hi = 1e10;
//     while (lo <= hi)
//     {
//         ll mid = (lo + hi) / 2ll;
//         if (mid * mid == x)
//             return mid;
//         else if (mid * mid > x)
//             hi = mid - 1ll;
//         else
//             lo = mid + 1ll;
//     }
//     assert(false);
// }

// void solve()
// {
//     ll n, q;
//     cin >> n >> q;
//     vector<ll> v(n);
//     vector<ll> s;
//     s.PB(0);
//     REP(i, 0, n)
//     {
//         cin >> v[i];
//         s.PB(v[i] + s[i]);
//     }
//     REP(i, 0, q)
//     {
//         ll a, b, c, sum = 0;
//         cin >> a >> b >> c;

//         ll nsum = (b - a + 1) * c;

//         nsum += s[a - 1];
//         nsum += (s[n] - s[b]);

//         if ((nsum) % 2 == 1)
//         {
//             cout << "YES " << nl;
//         }
//         else
//         {
//             cout << "NO" << nl;
//         }
//     }
// }

// int main()
// {
//     fast;
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     // solve();
//     return 0;
// }

class Solution
{
public:
    void solve(int n, vector<int> &dp)
    {
        // base case
        if (n <= 2)
            return n;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = solve(n - 1) + solve(n - 2);
        return dp[n];
    }
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        vector<int> dp(n + 1);
        for (int i = 0; i <= n; i++)
            dp[i] = -1;

        return solve(n, dp);
    }
};
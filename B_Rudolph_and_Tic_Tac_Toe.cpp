// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// typedef set<int> si;
// typedef set<ll> sl;
// typedef map<int, int> mi;
// typedef map<char, int> mc;
// #define lpr pair<long long int, long long int>

// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cout.tie(nullptr);            \
//     cin.tie(nullptr);
// #define input(gggg, n)             \
//     for (int xd = 0; xd < n; xd++) \
//         cin >> gggg[xd];
// #define REP(i, a, b) for (int i = a; i < b; ++i)
// #define REPP(i, a, b) for (int i = a; i >= b; --i)
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define nl "\n"
// #define sp " "

// #define bg 1000000

// vector<bool> is_prime(bg + 1, true);
// vector<long long> is_prime_main;

// void findPrime()
// {
//     is_prime[0] = is_prime[1] = false;

//     for (ll i = 2; i * i <= bg; i++)
//     {

//         if (is_prime[i] && i * i <= bg)
//         {

//             for (ll j = i * i; j <= bg; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }
// }
// bool comparefn(lpr a, lpr b)
// {
//     if (a.S != b.S)
//         return a.S < b.S;
//     return false;
// }

// void solve()
// {
//     string s[3], a;
//     cin >> a;
//     s[0] = a;
//     cin >> a;
//     s[1] = a;
//     cin >> a;
//     s[2] = a;
//     if ((s[0][0] == '+' && s[1][1] == '+' && s[2][2] == '+') || (s[0][2] == '+' && s[1][1] == '+' && s[2][0] == '+'))
//     {
//         cout << '+' << nl;
//     }
//     else if ((s[0][0] == 'X' && s[1][1] == 'X' && s[2][2] == 'X') || ((s[0][2] == 'X' && s[1][1] == 'X' && s[2][0] == 'X')))
//     {
//         cout << 'X' << nl;
//     }
//     else if ((s[0][0] == 'O' && s[1][1] == 'O' && s[2][2] == 'O') || ((s[0][2] == 'O' && s[1][1] == 'O' && s[2][0] == 'O')))
//     {
//         cout << 'O' << nl;
//     }
//     else
//     {
//         if ((s[0][0] == 'X' && s[0][1] == 'X' && s[0][2] == 'X') || (s[1][0] == 'X' && s[1][1] == 'X' && s[1][2] == 'X') || ((s[2][0] == 'X' && s[2][1] == 'X' && s[2][2] == 'X') || (s[0][0] == 'X' && s[1][0] == 'X' && s[2][0] == 'X') || (s[0][1] == 'X' && s[1][1] == 'X' && s[2][1] == 'X') || (s[0][2] == 'X' && s[1][2] == 'X' && s[2][2] == 'X')))
//         {
//             cout << "X" << nl;
//         }
//         else if ((s[0][0] == 'O' && s[0][1] == 'O' && s[0][2] == 'O') || (s[1][0] == 'O' && s[1][1] == 'O' && s[1][2] == 'O') || ((s[2][0] == 'O' && s[2][1] == 'O' && s[2][2] == 'O') || (s[0][0] == 'O' && s[1][0] == 'O' && s[2][0] == 'O') || (s[0][1] == 'O' && s[1][1] == 'O' && s[2][1] == 'O') || (s[0][2] == 'O' && s[1][2] == 'O' && s[2][2] == 'O')))
//         {
//             cout << "O" << nl;
//         }
//         else if ((s[0][0] == '+' && s[0][1] == '+' && s[0][2] == '+') || (s[1][0] == '+' && s[1][1] == '+' && s[1][2] == '+') || ((s[2][0] == '+' && s[2][1] == '+' && s[2][2] == '+') || (s[0][0] == '+' && s[1][0] == '+' && s[2][0] == '+') || (s[0][1] == '+' && s[1][1] == '+' && s[2][1] == '+') || (s[0][2] == '+' && s[1][2] == '+' && s[2][2] == '+')))
//         {
//             cout << "+" << nl;
//         }
//         else
//         {
//             cout << "DRAW" << nl;
//         }
//     }
// }
// int main()
// {
//     fast;
//     // findPrime();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     // solve();
//     return 0;
// }

//|ADMIRAL AUDITORE|//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define lp(i, a, n) for (ll i = a; i < n; i++)
#define rlp(i, n, l) for (ll i = n; i >= l; i--)
#define alg(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define F first
#define S second
#define vi vector<int>
#define pb push_back
#define setint set<int>
ll t;

string solve(char tic[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (tic[i][j] == '+')
                cnt1++;
            else if (tic[i][j] == 'X')
                cnt2++;
            else if (tic[i][j] == 'O')
                cnt3++;
        }
        if (cnt1 == 3)
            return "+";
        else if (cnt1 == 3)
            return "X";
        else if (cnt3 == 3)
            return "O";
    }
    for (int i = 0; i < 3; i++)
    {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (tic[j][i] == '+')
                cnt1++;
            else if (tic[j][i] == 'X')
                cnt2++;
            else if (tic[j][i] == 'O')
                cnt3++;
        }
        if (cnt1 == 3)
            return "+";
        else if (cnt2 == 3)
            return "X";
        else if (cnt3 == 3)
            return "O";
    }
    if (tic[0][0] == '+' && tic[1][1] == '+' && tic[2][2] == '+')
        return "+";
    if (tic[0][0] == 'X' && tic[1][1] == 'X' && tic[2][2] == 'X')
        return "X";
    if (tic[0][0] == 'O' && tic[1][1] == 'O' && tic[2][2] == 'O')
        return "O";
    if (tic[0][2] == '+' && tic[1][1] == '+' && tic[2][0] == '+')
        return "+";
    if (tic[0][2] == 'X' && tic[1][1] == 'X' && tic[2][0] == 'X')
        return "X";
    if (tic[0][2] == 'O' && tic[1][1] == 'O' && tic[2][0] == 'O')
        return "O";

    return "DRAW";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while (t--)
    {
        char tic[3][3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> tic[i][j];

        string sol = solve(tic);
        cout << sol << nl;
    }
}

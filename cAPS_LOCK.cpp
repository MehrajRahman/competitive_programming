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
    cin >> a;
    int l = a.size();
    int flag = 1;

    for (int i = 1; i < l; i++)
    {
        if (a[i] >= 97 && a[i] < 125)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
    {
        cout << a;
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (i == 0)
            {
                if (a[i] >= 97)
                {
                    a[i] -= 32;
                }
                else
                {
                    a[i] += 32;
                }
            }
            else if (a[i] >= 65 && a[i] < 97)
            {
                a[i] += 32;
            }
            else if (a[i] >= 97 && a[i] < 125)
            {
                a[i] -= 32;
            }
        }

        cout << a << endl;
    }
}
int main()
{
    fast;
    solve();
    return 0;
}

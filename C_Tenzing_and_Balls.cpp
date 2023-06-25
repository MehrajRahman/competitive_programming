#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e9 + 5;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(n + 1, 0);
    vector<int> mdx(n + 1, -INF);

    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1];
        dp[i] = max(dp[i], mdx[arr[i]] + i + 1);

        mdx[arr[i]] = max(mdx[arr[i]], dp[i - 1] - i);
        cout << dp[i] << " " << mdx[arr[i]] << endl;
    }

    cout << dp[n] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testc;
    cin >> testc;

    for (int i = 0; i < testc; i++)
    {
        solve();
    }
}

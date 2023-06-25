#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n), pref(n);

    for (int i = 0; i < n; ++i)
    {

        cin >> v[i];
        if (i == 0)
        {
            pref[i] = v[i];
        }
        else
        {
            pref[i] = v[i] + pref[i - 1];
        }
    }

    for (int i = n - 1; i >= 0; --i)
    {

        cout << pref[i] << " ";
    }
}
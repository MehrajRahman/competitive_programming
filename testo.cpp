#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(int a, int b)
{
    return a > b;
}

bool comp2(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, max_h = 0;
        cin >> n >> k;
        int mx = INT_MIN;
        vector<int> d(n);
        vector<pair<int, int>> v;
        vector<pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            if (d[i] > max_h)
            {
                max_h = d[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            m.push_back(make_pair(d[i], h));
        }
        sort(d.begin(), d.end(), comp);
        sort(m.begin(), m.end());

        int minInd = 0;
        int null = n;
        int p = 0;

        for (auto i : m)
        {
            cout << i.first << " " << i.second << endl;
        }
        cout << endl;
        // while (k > 0)
        // {
        //     p += k;

        //     if (k > max_h)
        //     {
        //         cout << "YES" << endl;
        //     }

        //     int min = v[0].second;
        //     for (int i = 1; i < null; i++)
        //     {
        //         if (v[i].second < min)
        //         {
        //             min = v[i].second;
        //         }
        //     }

        //     k -= min;
        //     if (k <= 0)
        //     {
        //         cout << "NO" << endl;
        //         break;
        //     }
        // }
    }
}
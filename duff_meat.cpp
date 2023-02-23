#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), comp);
    // long long sum = 0;
    // int ind = 0;
    // for (int i = 0; i < t; i++)
    // {
    //     sum += v[i].first * v[i].second;
    //     ind = i + 1;

    //     while (true)
    //     {
    //         if (ind > t - 1)
    //         {
    //             break;
    //         }
    //         if (v[i].second > v[ind].second)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             ind++;
    //         }
    //     }
    //     if (ind > i + 1)
    //     {
    //         for (int j = i + 1; j < ind; j++)
    //         {
    //             sum += v[j].first * v[i].second;
    //         }

    //         i = ind - 1;
    //     }
    // }

    for (auto it : v)
    {
        cout << it.first << it.second << endl;
    }

    // cout << sum << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cin >> s;
    vector<int> a(s);
    for (int i = 0; i < s; ++i)
    {
        cin >> a[i];
    }
    cin >> x;

    v.insert(v.begin() + x, a.begin(), a.end());
    int l = v.size();

    for (int i = 0; i < l; ++i)
    {
        cout << v[i] << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> p;
    vector<int> b(p);
    for (int i = 0; i < p; i++)
    {
        cin >> b[i];
    }
    cin >> m;
    a.insert(a.begin() + m, b.begin(), b.end());
    int k = a.size();
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
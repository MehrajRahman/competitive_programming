#include <iostream>
using namespace std;
int abc()
{
    int n, x, k;
    cin >> n >> k >> x;
    int p = -1, q;
    for (int i = k; i > 0; i--)
    {
        if (i == x)
            continue;
        else if (n % i == 0)
        {
            p = 0;
            q = i;
            break;
        }
        else if ((n % i) != x)
        {
            p = n % i;
            q = i;
            break;
        }
    }
    if (p < 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << n / q + (p > 0) << endl;
        for (int i = q; i <= n; i = i + q)
        {
            cout << q << " ";
        }
        if (p > 0)
            cout << p;
        cout << endl;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        abc();
}
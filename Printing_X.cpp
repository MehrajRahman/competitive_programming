#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == n / 2)
            {
                if (j == n / 2)
                {
                    cout << 'X';
                }
                else
                {
                    cout << " ";
                }
            }
            else if (i != n / 2)
            {
                if (j == k)
                {
                    cout << '\\';
                }
                else if (j == n - k - 1)
                {
                    cout << '/';
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
        k++;
    }
}
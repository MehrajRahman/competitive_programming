#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, l, nthValue, result = 0;

    vector<int> a;
    cin >> n >> l;
    // result = l;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            if (i <= l)
            {
                result++;
            }

            if (i == l)
            {
                nthValue = x;
            }

            if (i > l)
            {
                if (x == nthValue)
                {
                    result++;
                }
            }

            a.push_back(x);
        }
    }

    cout << result;

    return 0;
}

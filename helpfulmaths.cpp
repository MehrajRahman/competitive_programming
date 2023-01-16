#include <iostream>
#include <string>
using namespace std;

int main()
{
    string c;
    cin >> c;
    // cout << c;

    int n = c.length();
    for (int i = 0; i < n; i = i + 2)
    {

        for (int j = i; j < n; j = j + 2)
        {
            if (c[j] < c[i])
            {
                char d = c[i];
                c[i] = c[j];
                c[j] = d;
            }
        }
    }

    cout << c;

    return 0;
}
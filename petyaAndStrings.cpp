#include <iostream>
#include <string>
using namespace std;

int main()
{
    string c, d;
    cin >> c >> d;

    int n = c.length();
    int statusa = 0, statusb = 0, statusc = 0;

    for (int i = 0; i < n; i++)
    {
        // cout << tolower(c[i]) << endl;
        if (tolower(c[i]) > tolower(d[i]))
        {
            // statusa = statusa + (n - i);
            cout << 1;
            statusa++;
            break;
        }
        else if (tolower(c[i]) < tolower(d[i]))
        {
            // statusb = statusb + (n - i);
            cout << -1;
            statusb++;
            break;
        }
        if (i == (n - 1))
        {
            if (tolower(c[i]) == tolower(d[i]) && statusa == 0 && statusb == 0)
            {
                cout << 0;
            }
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string c;
    cin >> c;

    int n = c.length();
    int status = 0, calc = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (c[j] == c[i])
            {
                // cout << "IGNORE HIM!";
                status++;
            }
        }
        if (status == 0)
        {
            calc++;
        }
        status = 0;
    }

    if (calc % 2 == 0)
    {

        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
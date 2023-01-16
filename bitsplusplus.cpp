#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, result, x = 0;
    string a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "X++" || a == "++X")
        {
            x++;
        }
        else if (a == "X--" || a == "--X")
        {
            x--;
        }
        else
        {
            x = x;
        }
    }

    cout << x;

    return 0;
}

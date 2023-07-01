#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <unordered_set>
typedef long long int ll;
// typedef  for(int x=0;x<a;x++) fr(x,a);
using namespace std;

bool sortrev(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.first > b.first);
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return true;
    if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
    }
    return false;
}

int findWaysUtil(int ind, int target, vector<int> &arr, vector<vector<int>> &dp, int count)
{
    if (target >= 0 && count == 5)
        return 1;

    if (ind < 0)
    {
        return 0;
    }

    if (dp[ind][target] != -1)
        return dp[ind][target];

    int notTaken = findWaysUtil(ind - 1, target, arr, dp, count);

    int taken = 0;
    if (arr[ind] <= target)
        taken = findWaysUtil(ind - 1, target - arr[ind], arr, dp, count + 1);

    return dp[ind][target] = notTaken + taken;
}

int findWays(vector<int> &num, int k)
{
    int n = num.size();
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    return findWaysUtil(n - 1, k, num, dp, 0);
}
long long int maxProduct(int arr[], int n)
{
    // An array ti store  closest smaller element on left
    // side of every element. If there is no such element
    // on left side, then smaller[i] be -1.
    int smaller[n];
    smaller[0] = -1; // no smaller element on right side

    // create an empty set to store visited elements from
    // left side. Set can also quickly find largest smaller
    // of an element.
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        // insert arr[i] into the set S
        auto j = S.insert(arr[i]);
        auto itc = j.first; // points to current element in set

        --itc; // point to prev element in S

        // If current element has previous element
        // then its first previous element is closest
        // smaller element (Note : set keeps elements
        // in sorted order)
        if (itc != S.end())
            smaller[i] = *itc;
        else
            smaller[i] = -1;
    }

    // Initialize result
    long long int result = 0;

    // Initialize greatest on right side.
    int max_right = arr[n - 1];

    for (int i = n - 2; i >= 1; i--)
    {

        if (arr[i] > max_right)
            max_right = arr[i];

        else if (smaller[i] != -1)
            result = max((long long int)(smaller[i] * arr[i] * max_right),
                         result);
    }

    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        for (int i = 1; i <= k; i++)
        {
            if (i != x)
            {
                if (n % i == 0)
                {
                    cout << "YES" << endl;
                    cout << n / i << endl;
                    for (int j = 1; j <= n / i; j++)
                        cout << i << " ";
                    cout << endl;
                    goto ab;
                }
                else
                {
                    int h = n % i;
                    if (h <= k && h != x)
                    {
                        cout << "YES" << endl;
                        cout << n / i + 1 << endl;
                        for (int j = 1; j <= n / i; j++)
                            cout << i << " ";
                        cout << h << endl;
                        goto ab;
                    }
                }
            }
        }
        cout << "NO" << endl;
    ab:
        int hkk;
    }

    return 0;
}
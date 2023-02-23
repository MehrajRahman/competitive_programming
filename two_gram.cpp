#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int k;
	cin >> k;
	string a;
	cin >> a;
	string b;
	b.push_back(a[0]);
	b.push_back(a[1]);
	int max = 0;
	for (int i = 0; i < k - 2; i++)
	{
		int cnt = 0;
		for (int j = i + 1; j < k; j++)
		{
			if (a[i] == a[j] && a[i + 1] == a[j + 1])
			{
				cnt++;
				if (cnt > max)
				{
					max = cnt;
					b.clear();
					b.push_back(a[i]);
					b.push_back(a[i + 1]);
				}
			}
		}
	}

	cout << b << endl;

	return 0;
}
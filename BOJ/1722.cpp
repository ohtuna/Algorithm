#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long fac[21];
//자리수
bool check[21];


int main()
{
	int n, cmd;

	cin >> n >> cmd;

	fac[0] = 1;
	for (int i = 1; i < 21; i++)
	{
		fac[i] = fac[i - 1] * i;
	}

	if (cmd == 1)
	{	
		long long k;
		cin >> k;

		vector<int>a(n);

		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (check[j] == true)continue;

				if (fac[n - i - 1] < k)
				{
					k -= fac[n - i - 1];
				}
				else
				{
					a[i] = j;
					check[j] = true;
					break;
				}
			}
		}

		for (int k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}

	}
	else
	{
		vector<int>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		long long ans = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < a[i]; j++)
			{
				if (check[j] == false)
				{
					ans += fac[n - i - 1];
				}
			}
			check[a[i]] = true;
		}

		cout << ans + 1;
			
	}
}

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	vector<int>tree(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tree[i]);
	}

	//이분 탐색

	sort(tree.begin(), tree.end());

	long long left = 0;
	long long right = 1000000000;
	long long ans = 0;
	while (left <= right)
	{
		long long mid = (left + right) / 2;

		long long sum = 0;

		for (int i = 0; i < tree.size(); i++)
		{
			if (tree[i] > mid)
			{
				sum += tree[i]- mid;
			}
 		}

		if (sum >= m)
		{
			ans = max(ans, mid);
		}
		if (sum > m)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

	}

	cout << ans;

}

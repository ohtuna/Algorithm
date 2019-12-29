#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	int n;

	cin >> n;

	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int ans = 0;

	ans = max(ans, arr[arr.size() - 1] * arr[arr.size() - 2] * arr[arr.size() - 3]);
	ans = max(ans, arr[arr.size() - 1] * arr[arr.size() - 2]);
	ans = max(ans, arr[0] * arr[1]);
	ans = max(ans, arr[0] * arr[1] * arr[arr.size() - 1]);

	cout << ans;
}

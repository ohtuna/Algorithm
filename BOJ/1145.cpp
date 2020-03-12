#include<iostream>
#include<algorithm>

using namespace std;

int arr[5];
int ans = 100000000;

int main()
{

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				for (int l = 1; l <= 1000000; l++)
				{
					if (l % arr[i] == 0 && l % arr[j] == 0 && l%arr[k] == 0)
					{
						if (ans > l)
						{
							ans = l;
						}
					}
				}
			}
		}
	}

	cout << ans;
}

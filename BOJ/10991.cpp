#include<iostream>

using namespace std;

char star[1000][1000];

int main()
{
	int n;
	cin >> n;

	int start = 1;
	int starcnt = n;

	for (int y = 1; y <= n; y++)
	{
		for (int x = 1; x<= n*2 - 1; x++)
		{
			star[y][x] = '5';
		}
	}

	for (int y = n; y > 0; y--)
	{
		int temp = 0;
		for (int i = start; i <= 2 * n - 1; i += 2)
		{
			star[y][i] = '*';
			temp++;
			if (temp == starcnt)break;
		}
		start++;
		starcnt--;
	}



	for (int y = 1; y <= n; y++)
	{
		int st = y;
		int t = 0;
		for (int x = 1; x <= 2 * n - 1; x++)
		{
			if (star[y][x] == '5')
			{
				cout << " ";
			}
			else
			{
				cout << star[y][x];
				t++;
			}
			if (st == t)
			{
				cout << "\n";
				break;
			}
		}

	}

}

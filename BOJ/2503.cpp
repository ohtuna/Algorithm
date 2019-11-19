#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<memory.h>

using namespace std;

int n;
bool possible[1000];


int main()
{

	string num = "";
	memset(possible, true, sizeof(possible));
	for (int i = 123; i <= 987; i++)
	{
		num = to_string(i);
		if (num[0] == num[1] || num[0] == num[2] || num[1] == num[2]) possible[i] = false;
		if (num[0] == '0' || num[1] == '0' || num[2] == '0') possible[i] = false;
	}
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		num = "";
		cin >> num;
		int strike, ball;
		cin >> strike >> ball;

		for (int j = 123; j <= 987; j++)
		{
			int t_strike = 0;
			int t_ball = 0;


			if (possible[j] == true)
			{
				string temp = to_string(j);
				for (int k1 = 0; k1 < 3; k1++)
				{
					for (int k2 = 0; k2 < 3; k2++)
					{
						if (k1 == k2 && num[k1] == temp[k2]) t_strike++;
						if (k1 != k2 && num[k1] == temp[k2]) t_ball++;
					}
				}
				if (t_strike != strike || t_ball != ball) possible[j] = false;
			}

		}

	}


	int ans = 0;

	for (int i = 123; i <= 987; i++)
	{
		if (possible[i] == true) ans++;
	}

	cout << ans;





}

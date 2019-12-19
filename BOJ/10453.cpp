#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s1, s2;

		cin >> s1 >> s2;


		int pos1 = 0;
		int pos2 = 0;

		int ans = 0;

		while (1)
		{
			if (pos1 == s1.size() || pos2 == s2.size())break;

			if (s1[pos1] == s2[pos2])
			{
				pos1++;
				pos2++;
			}
			else
			{
				for (int i = pos1 + 1; i < s1.size(); i++)
				{
					if (s1[i] == s2[pos2])
					{
						swap(s1[i], s1[pos1]);
						ans += i - pos1;
						break;
					}
				}
			}
		}

		if (s1 == s2)
		{
			cout << ans << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}

	}

}

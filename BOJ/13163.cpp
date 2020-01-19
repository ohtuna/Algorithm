#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		char str[101];
		cin.getline(str, 101);
		int len = strlen(str);
		int cnt = 0;
		string ans;
		string temp;
		for (int j = 0; j < len; j++)
		{
			if (str[j] == ' ')
			{
				cnt++;
				if (cnt == 1)
				{
					ans += "god";
					temp = "";
				}
				else
				{
					ans += temp;
					temp = "";
				}
			}
			else
			{
				temp.push_back(str[j]);
			}
		}
		ans += temp;

		cout << ans << "\n";
	}
}

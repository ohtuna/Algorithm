#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int fac[100] = { 1, 1, 2, 6, 24, 120, 720, };

int main()
{
	while (1)
	{
		int num;
		scanf("%d", &num);
		if (num == 0) break;

		string temp = to_string(num);
		int mult = temp.size();

		int ans = 0;
		for (int i = 0; i < temp.size(); i++)
		{
			ans += fac[mult] * (temp[i] - '0');
			mult--;
		}

		printf("%d\n", ans);

	}
}

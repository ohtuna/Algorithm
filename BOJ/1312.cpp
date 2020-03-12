#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int a, b, n;

	cin >> a >> b >> n;

	int ans = 0;
	int i = 0;
	while (i < n)
	{
		a = a%b;
		a *= 10;
		ans = a/b;
		
		i++;
	}

	cout << ans;
}

#include<iostream>
#include<memory.h>

using namespace std;

bool check[6][6];


int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int first, second;
		cin >> first >> second;

		check[first][second]= true;
		check[second][first] = true;
	}


	bool flag = false;

	if (check[1][3] && check[3][1] && check[3][4] && check[4][3] && check[4][1] && check[1][4])
	{
		flag = true;
	}

	for (int i = 0; i <= 5; i++)
	{
		if (check[2][i] == true) flag = false;
		if (check[5][i] == true) flag = false;
	}
	


	if (flag == true)
	{
		cout << "Wa-pa-pa-pa-pa-pa-pow!";
	}
	else
	{
		cout << "Woof-meow-tweet-squeek";
	}

}

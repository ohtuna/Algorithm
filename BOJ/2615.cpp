#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int board[21][21];

//대각선 |/ 

int right_lineY[] = { -1, 1};
int right_lineX[] = { -1, 1 };

int left_lineY[] = { 1, -1 };
int left_lineX[] = { -1, 1 };

//세로
int g_dy[] = { 1, -1 };
int g_dx[] = { 0, 0 };
// 세로
int s_dy[] = { 0, 0 };
int s_dx[] = { 1, -1 };

bool cmp(pair<int, int> a, pair<int, int>b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	else
	{
		return a.second < b.second;
	}
}


int main()
{
	for (int y = 0; y < 19; y++)
	{
		for (int x = 0; x < 19; x++)
		{
			cin >> board[y][x];
		}
	}

	vector<pair<int, int>>v;
	bool flag = false;
	for (int y = 0; y < 19; y++)
	{
		for (int x = 0; x < 19; x++)
		{
			if (board[y][x] == 1 || board[y][x] == 2)
			{
				v.clear();
				int cnt = 1;
				v.push_back({ y,x });
				for (int i = 0; i < 2; i++)
				{
					for (int j = 1; ; j++)
					{
						int ny = y + right_lineY[i] * j;
						int nx = x + right_lineX[i] * j;
						if (ny < 0 || nx < 0 || ny >= 19 || nx >= 19)break;
						if (board[ny][nx] != board[y][x])break;
						cnt++;
						v.push_back({ ny,nx });
						if (cnt > 5)break;
					}
				}

				if (cnt == 5)
				{
					flag = true;
				}


				if (flag == true)break;

				v.clear();
				v.push_back({ y,x });

				cnt = 1;
				for (int i = 0; i < 2; i++)
				{
					for (int j = 1; ; j++)
					{
						int ny = y + left_lineY[i] * j;
						int nx = x + left_lineX[i] * j;
						if (ny < 0 || nx < 0 || ny >= 19 || nx >= 19)break;
						if (board[ny][nx] != board[y][x])break;
						cnt++;
						v.push_back({ ny,nx });
						if (cnt > 5)break;
					}
				}

				if (cnt == 5)
				{
					flag = true;
				}


				if (flag == true)break;

				cnt = 1;
				v.clear();
				v.push_back({ y,x });
				for (int i = 0; i < 2; i++)
				{
					for (int j = 1; ; j++)
					{
						int ny = y + g_dy[i] * j;
						int nx = x + g_dx[i] * j;
						if (ny < 0 || nx < 0 || ny >= 19 || nx >= 19)break;
						if (board[ny][nx] != board[y][x])break;
						cnt++;
						v.push_back({ ny,nx });
						if (cnt > 5)break;
					}
				}

				if (cnt == 5)
				{
					flag = true;
				}


				if (flag == true)break;

				cnt = 1;
				v.clear();
				v.push_back({ y,x });
				for (int i = 0; i < 2; i++)
				{
					for (int j = 1; ; j++)
					{
						int ny = y + s_dy[i] * j;
						int nx = x + s_dx[i] * j;
						if (ny < 0 || nx < 0 || ny >= 19 || nx >= 19)break;
						if (board[ny][nx] != board[y][x])break;
						cnt++;
						v.push_back({ ny,nx });
						if (cnt > 5)break;
					}
				}

				if (cnt == 5)
				{
					flag = true;
				}


				if (flag == true)break;
			}
			if (flag == true)break;
		}
		if (flag == true)break;
	}

	if (flag == true)
	{
		sort(v.begin(), v.end(), cmp);
		if (board[v[0].first][v[0].second] == 1)
		{
			cout << 1 << "\n";
		}
		else if(board[v[0].first][v[0].second] == 2)
		{
			cout << 2 << "\n";
		}
		cout << v[0].first+1 << " " << v[0].second+1;
		
	}
	else
	{
		cout << 0;
	}






}

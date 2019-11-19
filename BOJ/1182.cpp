#include<iostream>

using namespace std;

int r, c, k;
char map[7][7];
int visit[7][7];
int dy[] = { 0, 1, -1, 0 };
int dx[] = { 1, 0, 0, -1 };
int ans;

bool isRange(int y, int x)
{
	if (y < 0 || x < 0 || y >= r || x >= c) return false;
	return true;
}

void Solved(int y, int x, int move)
{
	if (move > k) return;
	if (move == k && y == 0 && x == c-1)
	{
		ans++;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (map[ny][nx] == 'T')continue;
		if (isRange(ny, nx) && visit[ny][nx] == 0)
		{
			visit[ny][nx] = 1;
			Solved(ny, nx, move + 1);
			visit[ny][nx] = 0;
		}
	}
}

int main()
{
	cin >> r >> c >> k;

	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			cin >> map[y][x];
		}
	}
	visit[r-1][0] = 1;
	Solved(r-1, 0, 1);

	cout << ans;

}

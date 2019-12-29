#include<iostream>
#include<queue>
#include<vector>
#include<utility>

using namespace std;


struct P
{
	int y;
	int x;
	char a;
};

int dy[] = { 0,1,-1,0 };
int dx[] = { 1,0, 0, -1 };

char board[255][255];
int visit[255][255];



int main()
{
	int r, c;

	cin >> r >> c;


	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			cin >> board[y][x];
		}
	}

	vector<P>list;
	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			if (board[y][x] == 'k' || board[y][x] == 'v')
			{
				list.push_back({ y,x,board[y][x] });
			}
		}
	}

	int ansWolf = 0;
	int ansSheep = 0;

	for (int i = 0; i < list.size(); i++)
	{
		if (visit[list[i].y][list[i].x] > 0)continue;
		queue<pair<int, int>>q;
		q.push({ list[i].y, list[i].x });
		visit[list[i].y][list[i].x] = 1;
		int sheep = 0;
		int wolf = 0;
		if (board[list[i].y][list[i].x] == 'k')
		{
			sheep = 1;
		}
		else
		{
			wolf = 1;
		}

		while (!q.empty())
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			for (int k = 0; k < 4; k++)
			{
				int ny = y + dy[k];
				int nx = x + dx[k];

				if (ny < 0 || nx < 0 || ny >= r || nx >= c) continue;
				if (visit[ny][nx] == 1)continue;
				if (board[ny][nx] == '#') continue;

				if (board[ny][nx] == 'k')
				{
					sheep++;
				}
				if (board[ny][nx] == 'v')
				{
					wolf++;
				}
				visit[ny][nx] = 1;
				q.push({ ny,nx });
			}
		}

		if (sheep > wolf)
		{
			ansSheep += sheep;
		}
		else
		{
			ansWolf += wolf;
		}

	}

	cout << ansSheep << " " << ansWolf;

	
}

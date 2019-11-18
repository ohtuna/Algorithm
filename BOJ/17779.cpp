#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int board[21][21];
int visit[21][21];
int copyvisit[21][21];
int dy[] = { 1, 1, -1, -1};
int dx[] = { -1, 1, 1, -1 };

int qy[] = { 0, -1, 0, 1 };
int qx[] = { 1, 0, -1, 0 };

int n;

int sy, sx;
//분할 할거
int ans = -1;


int CalcSection()
{
	vector<int>sum;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0; 
	int sum5 = 0;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			if (copyvisit[y][x] == 1)
			{
				sum1 += board[y][x];
			}
			if (copyvisit[y][x] == 2)
			{
				sum2 += board[y][x];
			}
			if (copyvisit[y][x] == 3)
			{
				sum3 += board[y][x];
			}
			if (copyvisit[y][x] == 4)
			{
				sum4 += board[y][x];
			}
			if (copyvisit[y][x] == 5)
			{
				sum5 += board[y][x];
			}
		}
	}
	sum.push_back(sum1);
	sum.push_back(sum2);
	sum.push_back(sum3);
	sum.push_back(sum4);
	sum.push_back(sum5);
	sort(sum.begin(), sum.end());

	return sum[4] - sum[0];
}

void DrawVisit(int dy1, int dx1, int dy2, int dx2, int dy3, int dx3, int idx)
{
	queue<pair<int, int>>q;
	if (idx == 1)
	{
		q.push({ 0, 0 });
		copyvisit[0][0] = 1;

		while (!q.empty())
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++)
			{
				int ny = y + qy[i];
				int nx = x + qx[i];
				if (ny < 0 || ny >= dy1 || nx < 0 || nx>sx)continue;
				if (copyvisit[ny][nx] > 0) continue;
				q.push({ ny, nx });
				copyvisit[ny][nx] = idx;
			}

		}
	}

	if (idx == 2)
	{
		q.push({ 0, n-1 });
		copyvisit[0][n-1] = 2;

		while (!q.empty())
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++)
			{
				int ny = y + qy[i];
				int nx = x + qx[i];
				if (ny < 0 || ny > dy3 || nx <= sx || nx>=n)continue;
				if (copyvisit[ny][nx] > 0) continue;
				q.push({ ny, nx });
				copyvisit[ny][nx] = 2;
			}

		}
	}

	if (idx == 3)
	{
		q.push({ n-1, 0 });
		copyvisit[n-1][0] = 3;

		while (!q.empty())
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++)
			{
				int ny = y + qy[i];
				int nx = x + qx[i];
				if (ny < dy1 || ny >=n || nx < 0 || nx >= dx2)continue;
				if (copyvisit[ny][nx] > 0) continue;
				q.push({ ny, nx });
				copyvisit[ny][nx] = 3;
			}

		}
	}


	if (idx == 4)
	{
		q.push({ n-1, n-1 });
		copyvisit[n - 1][n-1] = 4;

		while (!q.empty())
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++)
			{
				int ny = y + qy[i];
				int nx = x + qx[i];
				if (ny < dy3 || ny >= n || nx < dx2 || nx >= n)continue;
				if (copyvisit[ny][nx] > 0) continue;
				q.push({ ny, nx });
				copyvisit[ny][nx] = 4;
			}

		}
	}

	if (idx == 5)
	{
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				if (copyvisit[y][x] == 0)copyvisit[y][x] = 5;
			}
		}
	}



}

void dfs(int y, int x, int idx, int dir, int dy1, int dx1, int dy2, int dx2, int dy3, int dx3)
{
	int ny = y + dy[dir];
	int nx = x + dx[dir];
	if (ny < 0 || nx < 0 || ny>= n || nx >= n) return;
	if (dir == 3 && ny < sy) return;
	if (visit[ny][nx] > 0) return;

	visit[ny][nx] = idx;
	if (ny == sy && nx == sx && dir == 3)
	{
		
		// 계산하고
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < n; x++)
			{
				copyvisit[y][x] = visit[y][x];
			}
		}


		for (int i = 1; i <= 5; i++)
		{
			DrawVisit(dy1, dx1, dy2, dx2, dy3, dx3, i);
		}

		int s = CalcSection();

		//
		//지워 줘야함
		if (ans == -1 || ans > s)
		{
			ans = s;
		}



		visit[ny][nx] = 0;
		return;
	}


	if (dir == 0)
	{
		dfs(ny, nx, idx, 0, ny, nx, dy2, dx2 ,dy3 ,dx3);
		dfs(ny, nx, idx, 1, ny, nx, dy2, dx2, dy3, dx3);
	}
	if (dir == 1)
	{
		dfs(ny, nx, idx, 1, dy1, dx1, ny, nx, dy3, dx3);
		dfs(ny, nx, idx, 2, dy1, dx1, ny, nx, dy3, dx3);
	}
	if (dir == 2)
	{
		dfs(ny, nx, idx, 2, dy1, dx1, dy2, dx2, ny, nx);
		dfs(ny, nx, idx, 3, dy1, dx1, dy2, dx2, ny, nx);
	}
	if (dir == 3)
	{
		dfs(ny, nx, idx, 3, dy1, dx1, dy2, dx2, dy3, dx3);
	}
	visit[ny][nx] = 0;
}



void DrawLine(int y, int x, int index)
{
	sy = y;
	sx = x;

	dfs(sy, sx, index, 0, 0 ,0 ,0, 0 ,0 ,0);
}

int main()
{
	cin >> n;

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			cin >> board[y][x];
		}
	}

	//경계선 만드는 작업
	for (int y = 0; y <= n-2; y++)
	{
		for (int x = 1; x <= n - 1; x++)
		{
			DrawLine(y, x, 5);
		}
	}



	cout << ans;


}

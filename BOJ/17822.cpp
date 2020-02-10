#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int n,m;
int t;
int x,d,k;

vector<int>board[55];
vector<pair<int,int>>remove_list;


void ClockRotate(vector<int>&a, int k)
{
    vector<int>move_list = a;
    for(int i =0; i<move_list.size(); i++)
    {
        int r = i+k;
        a[r%a.size()] = move_list[i];
    }
}
void ClockwiseRotate(vector<int>&a, int k)
{
    vector<int>move_list = a;

    for(int i =0; i<move_list.size(); i++)
    {
        int t = k;
        int idx = i;
        while(t--)
        {
            idx--;
            if(idx < 0)
            {
                idx = m-1;
            }
        }
        a[idx] = move_list[i];
    }

}

bool check()
{
    bool flag = false;
    for(int y =0; y<n; y++)
    {
        for(int x =0; x<m; x++)
        {
            if(board[y][x] == -1) continue;
            if(y==0)
            {
                for(int k =0; k<3; k++)
                {
                    int ny = y + dy[k];
                    int nx = x + dx[k];
                    if(nx < 0)
                    {
                        nx = m-1;
                    }
                    if(nx >= m)
                    {
                        nx = 0;
                    }

                    if(board[y][x] == board[ny][nx])
                    {
                        flag = true;
                        remove_list.push_back({ny,nx});
                        remove_list.push_back({y,x});
                    }
                }
            }
            if(y>=1 && y<=n-2)
            {
                for(int k =0; k<4; k++)
                {
                    int ny = y+ dy[k];
                    int nx = x + dx[k];
                    if(nx < 0)
                    {
                        nx = m-1;
                    }

                    if(nx >= m)
                    {
                        nx = 0;
                    }

                    if(board[y][x] == board[ny][nx])
                    {
                        flag = true;
                        remove_list.push_back({ny,nx});
                        remove_list.push_back({y,x});
                    }
                }
            }
            if(y == n-1)
            {
                for(int k =0; k<4; k++)
                {
                    if(k==2) continue;
                    int ny = y + dy[k];
                    int nx = x + dx[k];
                    if(nx < 0)
                    {
                        nx = m-1;
                    }

                    if(nx >= m)
                    {
                        nx = 0;
                    }
                    if(board[y][x] == board[ny][nx])
                    {
                        flag = true;
                        remove_list.push_back({ny,nx});
                        remove_list.push_back({y,x});
                    }
                }
            }

        }
    }
    return flag;
}

//시계 방향 회전

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m >> t;
    

    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
                    int x;
            cin >> x;
            board[i].push_back(x);
        }

    }
    for(int i = 0; i<t; i++)
    {
        cin >> x >> d >> k;

        //x 배수 원판 다 돌린다
        for(int j = 1; j<=n; j++)
        {
            if(j%x == 0)
            {
                if(d == 0)
                {
                    //k칸 회전
                    ClockRotate(board[j-1], k);
                }
                else
                {
                    ClockwiseRotate(board[j-1],k);
                }
            }
        }
        //원판 삭제....
        //
       if(check())
       {
           for(int j =0; j<remove_list.size(); j++)
           {
               board[remove_list[j].first][remove_list[j].second] = -1;
           }
           
       }
       else
       {
           int sum =0;
           int ccnt = 0;
           for(int y = 0; y<n; y++)
           {
               for(int x =0; x<m; x++)
               {
                   if(board[y][x]== -1)continue;
                   ccnt++;
                   sum+= board[y][x];
               }
           }
            double avg = (double)sum/ccnt;
           for(int y = 0; y<n; y++)
           {
               for(int x =0; x<m; x++)
               {
                   if(board[y][x] == -1) continue;

                   if(avg < board[y][x])
                   {
                       board[y][x]--;
                   }
                   else if(avg > board[y][x])
                   {
                       board[y][x]++;
                   }
               }
           }
       }

       remove_list.clear();
       




    }

    int sum = 0;
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            if(board[i][j] == -1)continue;
            sum += board[i][j];
        }
    }

    cout << sum;

}

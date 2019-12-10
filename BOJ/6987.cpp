#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int,int>>team;
int score[6][4];
int game[6][4];
int ans = 0;

bool Check()
{
    for(int i =0; i<6; i++)
    {
        for(int j =0; j<3; j++)
        {
            if(score[i][j] != game[i][j]) return false;
        }
    }
    return true;
}

void go(int depth)
{
    if(depth == 15)
    {
       if(Check()) ans = 1;
       return;
    }

    int t1 = team[depth].first;
    int t2 = team[depth].second;

    game[t1][0]++, game[t2][2]++;
    go(depth+1);
    game[t1][0]--, game[t2][2]--;
    game[t1][2]++, game[t2][0]++;
    go(depth+1);
    game[t1][2]--, game[t2][0]--;
    game[t1][1]++, game[t2][1]++;
    go(depth+1);
    game[t1][1]--, game[t2][1]--;

}

int main()
{
    for(int i =0; i<6; i++)
    {
        for(int j = i+1; j<6; j++)
        {
            team.push_back({i,j});
        }
    }

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<6; j++)
        {
            for(int k =0; k<3; k++)
            {
                cin >> score[j][k];
            }
        }
        ans = 0;
        go(0);
        cout << ans << " ";
    }

}

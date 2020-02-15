#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Info
{
    int score;
    int submit;
    int time;
    int teamID; 
};

int t;

Info team[101][101];
  

int ccmp(Info a, Info b)
{
    if(a.score != b.score) return a.score > b.score;
    else
    {
        if(a.submit != b.submit) return a.submit < b.submit;
        else
        {
            return a.time < b.time;
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while(t--)
    {
        vector<Info>ans;
        int n, k, t, m;
        //n 팀의 수 k 문제 수 t  우리팀 아이디 m 로그 수
        cin >> n >> k >> t >>m;

        for(int i = 0; i<=n; i++)
        {
            for(int j = 0; j<=k; j++)
            {
                team[i][j].score = -1;
                team[i][j].submit = 0;
                team[i][j].time = 0;
            }
        }

        for(int i =1; i<=m; i++)
        {
            int teamID, problemNum, score;
            cin >> teamID >> problemNum >> score;
            if(team[teamID][problemNum].score == -1)
            {
                team[teamID][problemNum].score = score;
                team[teamID][problemNum].submit++;
                team[teamID][problemNum].time = i;
            }
            else if(team[teamID][problemNum].score < score)
            {
                team[teamID][problemNum].score = score;
                team[teamID][problemNum].submit++;
                team[teamID][problemNum].time = i;                
            }
            else
            {
                team[teamID][problemNum].submit++;
                team[teamID][problemNum].time = i;
            }
            
            
        }
       
        //점수 총합, 풀이 제출 횟수, 마지막 제출 시간 빠른 놈
        for(int i =1; i<=n; i++)
        {
            int totalscore = 0;
            int submit = 0;
            int time = 0;
            for(int j = 1; j<=k; j++)
            {
                if(team[i][j].score == -1)continue;
                totalscore+=team[i][j].score;
                submit += team[i][j].submit;
                time = max(time, team[i][j].time);
            }
            ans.push_back({totalscore, submit, time, i});
        }
            sort(ans.begin(), ans.end(), ccmp);

        int rank = 0;
        for(int i =0; i<ans.size(); i++)
        {
            rank++;
            if(ans[i].teamID == t)break;
        }

        cout << rank << "\n";
       
    }

}

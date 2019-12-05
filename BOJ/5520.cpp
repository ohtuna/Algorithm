#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int INF = 9999;
const int CLOCKS = 9;
const int SWITCHS = 9;

const char linked[SWITCHS][CLOCKS+1]=
{
    "xx.xx....",
    "xxx......",
    ".xx.xx...",
    "x..x..x..",
    ".x.xxx.x.",
    "..x..x..x",
    "...xx.xx.",
    "......xxx",
    "....xx.xx"
};

vector<pair<int,int>>a;
vector<int>answer;

bool is_Aligned(vector<int>&clocks)
{
    for(int i =0; i<CLOCKS; i++)
    {
        if(clocks[i] != 0 )
        {
            return false;
        }
    }
    return true;
}

void push(vector<int>&clocks, int swtch)
{
    for(int clock = 0; clock < CLOCKS; clock++)
    {
        if(linked[swtch][clock] == 'x')
        {
            clocks[clock]+=1;
            if(clocks[clock] == 4) clocks[clock] = 0;
        }
    }
}
bool find = false;

int solve(vector<int>&clocks, int swtch)
{
    if(swtch == SWITCHS)
    {
        if(is_Aligned(clocks))
        {
            vector<int>test;
            for(int i=0; i<a.size(); i++)
            {
                if(a[i].first > 0)
                {
                    for(int j = 0; j<a[i].first; j++)
                    {
                        test.push_back(a[i].second+1);
                    }
                    
                }
            }
            if(answer.size() == 0 || answer.size() > test.size())
            {
                answer = test;
            }
            return 0;
        }
        else
        {
            return INF;
        }
        
    }

    int ret = INF;

    
    for(int cnt = 0; cnt<4; cnt++)
    {
        a.push_back({cnt,swtch});
        int res = cnt + solve(clocks, swtch+1);
        a.pop_back();
        ret = min(ret, res);    
        push(clocks, swtch);

    }
    return ret;
}

int main()
{
    vector<int>clocks(CLOCKS);
    for(int i =0; i<CLOCKS; i++)
    {
        cin >> clocks[i];
    }   


    int ans = solve(clocks, 0);

    if(ans == INF)
    {
        cout << -1;
    }
    else
    {
        for(int i =0; i<answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
    }
    

    
}

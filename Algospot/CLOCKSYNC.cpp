#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

const int INF = 9999;
const int SWITCHS = 10;
const int CLOCKS = 16;

const char linked[SWITCHS][CLOCKS+1] =
{
    "xxx.............",
    "...x...x.x.x....",
    "....x.....x...xx",
    "x...xxxx........",
    "......xxx.x.x...",
    "x.x...........xx",
    "...x..........xx",
    "....xx.x......xx",
    ".xxxxx..........",
    "...xxx...x...x.."
};

bool areAligned(vector<int>&clock)
{
    for(int i =0; i<16; i++)
    {
        if(clock[i] != 12) return false;
    }
    return true;
}

void push(vector<int>&clocks, int swtch)
{
    for(int clock = 0; clock<CLOCKS; clock++)
    {
        if(linked[swtch][clock] == 'x')
        {
            clocks[clock] +=3;
            if(clocks[clock] == 15) clocks[clock] = 3;
        }
    }
}


int solve(vector<int>&clock, int swtch)
{
    if(swtch == SWITCHS) return areAligned(clock) ? 0 : INF;

    int ret = INF;
    
    for(int cnt = 0; cnt <4; cnt++)
    {
        ret = min(ret, cnt + solve(clock, swtch + 1));
        push(clock, swtch);
    }
    return ret;
}


int main()
{
    int n;
    cin >> n;

    for(int i =0; i<n; i++)
    {
        vector<int>clock(16);

        for(int j =0; j<16; j++)
        {
            cin >> clock[j];
        }


        int ans = solve(clock, 0);
        if(ans == INF)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
        
       
    }

}

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

struct Team
{
    int problem;
    int time;
    int idx;
};

int failed[150][20];
int sucess[150][20];

int ccmp(Team a, Team b)
{
    if(a.problem != b.problem)
    {
        return a.problem > b.problem;
    }
    if(a.time != b.time)
    {
        return a.time < b.time;
    }
    else
    {
        return a.idx < b.idx;
    }
    
}


int main()
{
    int n, m, q;

    cin >> n >> m >> q;

    vector<Team>v(n);

    for(int i = 0; i<n; i++)
    {
        v[i].idx = i+1;
    }

    for(int i = 0; i<q; i++)
    {
        int time, idx, problemNo;
        string result;
        cin >> time >> idx >> problemNo >> result;
        idx--;
        if(result == "WA" || result == "TLE" || result == "RE")
        {   
            failed[idx][problemNo]++;
        }
        else
        {
            if(failed[idx][problemNo] == 0)
            {
                if(sucess[idx][problemNo] == 0)
                {
                    sucess[idx][problemNo] = 1;
                    v[idx].problem++;
                    v[idx].time += time;
                }
       
            }
            else
            {
                if(sucess[idx][problemNo] ==0)
                {
                    sucess[idx][problemNo] = 1;
                    v[idx].problem++;
                    v[idx].time += (time) + (20 *failed[idx][problemNo]);
                }

            }
            
        }
    }

    sort(v.begin(), v.end(), ccmp);

    for(int i = 0 ; i<v.size(); i++)
    {
        cout << v[i].idx << " " << v[i].problem << " " << v[i].time << "\n";
    }
}

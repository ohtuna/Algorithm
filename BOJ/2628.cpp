#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

struct Paper
{
    int r1; //Range1
    int r2; //Range2
    int cut; // Cut method
};

int main()
{
    int x, y;

    cin >> x >> y;

    int n;

    cin >> n;

    queue<Paper>q;
    q.push({0, y, 0});
    q.push({0, x, 1});
    vector<pair<int,int>>v;

    for(int i =0; i<n; i++)
    {
        int cut, loc;
        cin >> cut >> loc;
        v.push_back({cut, loc});
    }
    for(int i =0; i<n; i++)
    {
        int len = q.size();
        
        for(int j = 0; j<len; j++)
        {
            Paper temp = q.front();
            q.pop();
            if(v[i].first != temp.cut) q.push(temp);
            else
            {
                if(temp.r1 <= v[i].second && temp.r2 > v[i].second)
                {
                    q.push({temp.r1, v[i].second, temp.cut});
                    q.push({v[i].second, temp.r2, temp.cut});
                }
                else q.push(temp);
            }
        }
    }

    int maxh = 0;
    int maxw = 0;
    while(!q.empty())
    {
        if(q.front().cut == 0)
        {
            maxh = max(maxh, q.front().r2 - q.front().r1);
        }
        else
        {
            maxw = max(maxw, q.front().r2 - q.front().r1);
        }
        q.pop();
    }

    cout << maxh * maxw;

}

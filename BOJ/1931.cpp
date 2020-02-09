#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int ccmp(pair<int,int>a, pair<int,int>b)
{
    if(a.second == b.second)
    {
       return a.first < b.first;
    }
    else
    {
       return a.second < b.second;
    }


    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int,int>> meeting(n);
    for(int i =0; i<n; i++)
    {
        int begin, end;
        cin >> begin >> end;
        
        meeting[i].first = begin;
        meeting[i].second = end;
    }

    sort(meeting.begin(), meeting.end(), ccmp);
    
    int begintime = 0;
    int endtime = 0;
    int ans = 0;
    for(int i = 0; i<meeting.size(); i++)
    {
        if(begintime <= meeting[i].first)
        {
            begintime = meeting[i].second;
            ans++;
        }
    }

    cout << ans;
}

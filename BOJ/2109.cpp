#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>


using namespace std;

#define P pair<int,int>

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>>lecture(n);

    for(int i =0; i<n; i++)
    {
        cin >> lecture[i].first >> lecture[i].second;
    }

    sort(lecture.begin(), lecture.end(), [](pair<int,int>u, pair<int,int>v) { return u.second > v.second;});

    int k =0;
    priority_queue<int> q;
    int ans = 0;

    for(int i=10000; i>=1; i--)
    {
        while(k<n && lecture[k].second == i)
        {
            q.push(lecture[k].first);
            k+=1;
        }
        if(!q.empty())
        {
            ans+=q.top();
            q.pop();
        }
    }

    cout << ans;

    
}

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int nationnum[101];

struct Person
{
    int score;
    int nation;
    int stuno;
    
};

bool ccmp(Person a, Person b)
{
    return a.score > b.score;
}

int main()
{
    int n;
    cin >> n;

    vector<Person>v;



    for(int i =0; i<n; i++)
    {
        int n, s, sc;
        cin >> n >> s >> sc;
        v.push_back({sc, n,s});
    }

    sort(v.begin(), v.end(), ccmp);

    vector<pair<int,int>>ans;
    for(int i=0; i<v.size(); i++)
    {
        if(nationnum[v[i].nation] >= 2)continue;
        nationnum[v[i].nation]++;
        ans.push_back({v[i].nation, v[i].stuno});
        if(ans.size() == 3)break;
    }

    for(int i =0; i<ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
}

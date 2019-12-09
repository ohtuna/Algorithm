#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<char, int>>ans;

    for(int i =0; i<3; i++)
    {
        if((n+i)%4 == 1)
        {
            ans.push_back({'A', i});
        }
        else if((n+i)%4 == 3)
        {
            ans.push_back({'B', i});
        }
        else if((n+i)% 2 == 2)
        {
            ans.push_back({'C', i});
        }
        else
        {
            ans.push_back({'D', i});    
        }
    }

    sort(ans.begin(), ans.end());


    cout << ans[0].second << " " << ans[0].first;

}

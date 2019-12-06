#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    vector<int>removelist;

    int cnt = 0;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i] == 'x')
        {
            cnt++;
        }
        else
        {
            if(cnt >=3)
            {
                removelist.push_back(cnt);
            }
            cnt = 0;
        }
    }
    if(cnt >= 3)
    {
        removelist.push_back(cnt);
    }

    int ans = 0;
    for(int i =0; i<removelist.size(); i++)
    {
        ans += (removelist[i] -2);
    }

    cout << ans;
}

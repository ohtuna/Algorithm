#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n;

    string s;
    cin >> n >> s;

    vector<int>ans;

    int cnt = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'B')
        {
            cnt++;
        }
        else
        {
            if(cnt ==0)continue;
            ans.push_back(cnt);
            cnt = 0;
        }
    }

    if(cnt > 0)
    {
        ans.push_back(cnt);
    }

    cout << ans.size() << "\n";
    for(int i =0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
}

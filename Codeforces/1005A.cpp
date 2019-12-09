#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>stair(n);

    for(int i =0; i<n; i++)
    {
        cin >> stair[i];
    }

    vector<int>ans;
    vector<int>temp;
    int cnt = 0;
    for(int i =0; i<stair.size(); i++)
    {
        if(temp.size() == 0)
        {
            temp.push_back(stair[i]);
            cnt++;
        }
        else
        {
            if(temp.back() >= stair[i])
            {
                ans.push_back(cnt);
                temp.push_back(stair[i]);
                cnt = 1;
            }
            else
            {
                temp.push_back(stair[i]);
                cnt++;
            }
            
        }
    }

    if(cnt >= 0)
    {
        ans.push_back(cnt);
    }

    cout << ans.size() << "\n";
    for(int i =0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;


vector<pair<int,int>>a;

int main()
{
    int n, c;

    cin >> n >> c;

    int indexed = 0;
    for(int i = 0; i<n; i++)
    {
        int temp;
        cin >> temp;
        if(a.size() == 0)
        {
            a.push_back({temp,1});
        }
        else
        {
            bool find = false;
            for(int j = 0; j<a.size(); j++)
            {
                if(a[j].first == temp)
                {
                    find = true;
                    a[j].second++;
                    break;
                }
            }
            if(find == false)
            {
                a.push_back({temp,1});
            }
        }
    }

    vector<pair<int,int>>ans;
    int mmax = 0;
    for(int i =0; i<a.size(); i++)
    {
        mmax = max(mmax, a[i].second);
    }

    while(mmax>0)
    {
        for(int i = 0; i<a.size(); i++)
        {
            if(a[i].second == mmax)
            {
                ans.push_back(a[i]);
            }
        }
        mmax--;
    }

    for(int i =0; i<ans.size(); i++)
    {
        for(int j = 0; j<ans[i].second; j++)
        {
            cout << ans[i].first << " ";
        }
    }


}

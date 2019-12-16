#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


struct Point
{
    int x;
    int y;
    int z;
};

int main()
{
    string str;

    cin >> str;

    vector<Point>p_list;
    vector<string>ans;

    int cnt1 = 0;
    int cnt2 = 0;
    for(int i =0; i<str.size()-2; i++)
    {
        cnt1++;
        for(int j = i+1; j<str.size()-1; j++)
        {
            cnt2++;
            int s_size = str.size();
            p_list.push_back({cnt1, cnt2,  s_size - cnt1 - cnt2});
        }
        cnt2 = 0;
    }

    for(int i = 0; i<p_list.size(); i++)
    {
        string temp1;
        string temp2;
        string temp3;
        for(int t = 0; t<p_list[i].x; t++)
        {
            temp1.push_back(str[t]);
        }
        for(int t = 0; t<p_list[i].y; t++)
        {
            temp2.push_back(str[p_list[i].x + t]);
        }
        for(int t = 0; t<p_list[i].z; t++)
        {
            temp3.push_back(str[p_list[i].x + p_list[i].y + t]);
        }

        reverse(temp1.begin(), temp1.end());
        reverse(temp2.begin(), temp2.end());
        reverse(temp3.begin(), temp3.end());

        ans.push_back(temp1 + temp2 + temp3);
    }

    sort(ans.begin(), ans.end());

    cout << ans[0]; 
}

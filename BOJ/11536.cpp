#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;
    cin >> s;
    string temp = s;
    vector<int>s_list;

    for(int i =0; i<n-1; i++)
    {
        cin >> s;
        int up = 0;
        int len = min(temp.size(), s.size());
        for(int i =0; i<len; i++)
        {
            if(temp[i] > s[i])
            {
                up = 1;
                break;
            }
            else if(temp[i] == s[i]) continue;
            else
            {
                up = -1;
                break;
            }
        }
        temp = s;
        s_list.push_back(up);
    }   
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i =0; i<s_list.size(); i++)
    {
        if(s_list[i] == 1) cnt1++;
        if(s_list[i] == -1)cnt2++;
    }

    if(cnt1 > 0 && cnt2 == 0)
    {
        cout << "DECREASING";
    }
    else if(cnt1 == 0 && cnt2 > 0)
    {
        cout << "INCREASING";
    }
    else
    {
        cout << "NEITHER";
    }

}

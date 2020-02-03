#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string>
#include<set>
#include<cstdlib>
#include<string.h>
#include<math.h>

using namespace std;

int visit[11];
vector<pair<int,int>>v;
set<string>ans;
string str;

void go(vector<pair<int,int>>&remove_list, int depth, int max_n, int idx)
{
    if(depth >= max_n)
    {
        string temp;    
        for(int i= 0; i<str.size(); i++)
        {
            bool flag = true;
            for(int j = 0; j<v.size(); j++)
            {
                if(i == v[j].first || i == v[j].second)
                {
                    flag = false;
                    break;
                }
            }
            if(flag == false) continue;
            temp.push_back(str[i]);
        }
        ans.insert(temp);
        return;
        
    }
    for(int i  = idx; i<remove_list.size(); i++)
    {
        if(visit[i] == 1) continue;
        visit[i] = 1;
        v.push_back(remove_list[i]);
        go(remove_list, depth+1, max_n, idx+1);
        visit[i] = 0;
        v.pop_back();
    }
}

int main()
{

    cin >> str;



    stack<int>st;
    vector<int>a[11];

    int startIdx = 0;
    for(int i = 0; i<str.size(); i++)
    {
        if(str[i] == '(')
        {
            st.push(i);
        }
        else if(str[i] == ')')
        {
            a[startIdx].push_back(st.top());
            a[startIdx].push_back(i);
            startIdx++;
            st.pop();
        }
    }
    vector<pair<int,int>>remove_list;
    for(int i = 0; i<startIdx; i++)
    {
        remove_list.push_back({a[i][0], a[i][1]});
    }
    for(int i =1; i<= remove_list.size(); i++)
    {
        go(remove_list, 0, i, 0);
    }
    // 10!;







    for(auto s : ans)
    {
        cout << s << "\n";
    }
}

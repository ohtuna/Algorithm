#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int alpha[27];

int main()
{
    int n;
    cin >> n;

    for(int i =0; i<=n; i++)
    {
        char t;
        scanf("%1c", &t);
        if(t == '\n')continue;
        alpha[t-'a']++;
    }
    vector<int>ans;

    while(1)
    {
        if(alpha['o'-'a'] >0 && alpha['n' - 'a'] > 0 && alpha['e' - 'a'] > 0)
        {
            alpha['o' - 'a']--;
            alpha['n' - 'a']--;
            alpha['e' - 'a']--;
            ans.push_back(1);
        }
        else break;
    }
    while(1)
    {
        if(alpha['z'-'a'] >0 && alpha['e' - 'a'] > 0 && alpha['r' - 'a'] > 0 && alpha['e' - 'a'] >0)
        {
            alpha['z' - 'a']--;
            alpha['e' - 'a']--;
            alpha['r' - 'a']--;
            alpha['o' - 'a']--;
            ans.push_back(0);
        }
        else break;
    }

    for(int i =0 ; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    


}

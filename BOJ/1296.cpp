#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int love[4] = {0,};
   
    string s;
    cin >> s;
    int n;
    cin >> n;

    vector<string>gf_list;
    for(int i =0; i<n; i++)
    {
        string gf;
        cin >> gf;
        gf_list.push_back(gf);
    }

    sort(gf_list.begin(), gf_list.end());

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'L') love[0]++;
        if(s[i] == 'O') love[1]++;
        if(s[i] == 'V') love[2]++;
        if(s[i] == 'E') love[3]++;
    }

    int max_score = -1;
    string ans;

    for(int i =0; i< gf_list.size(); i++)
    {
         int love2[4] = {0,};
         for(int j = 0; j<gf_list[i].size(); j++)
         {
            if(gf_list[i][j] == 'L') love2[0]++;
            if(gf_list[i][j] == 'O') love2[1]++;
            if(gf_list[i][j] == 'V') love2[2]++;
            if(gf_list[i][j] == 'E') love2[3]++;
         }
        int res = ((love[0] + love2[0] + love[1] + love2[1])*(love[0] + love2[0] + love[2] + love2[2])* (love[0] + love2[0] + love[3] + love2[3]) * (love[1] + love2[1] + love[2] + love2[2])*(love[1] + love2[1] + love[3] + love2[3]) * (love[3] + love2[3] + love[2] + love2[2]))%100;      

        if(max_score == -1 || max_score < res)
        {
            max_score = res;
            ans = gf_list[i];
        }
    }

    cout << ans;


}

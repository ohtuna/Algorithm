#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int visit[10000];

int main()
{
    vector<int>a(4);

    for(int i =0; i<4; i++)
    {
        cin >> a[i];
    }
    int minNum = a[0]*1000 + a[1]*100 + a[2] * 10 + a[3];
    minNum = min(minNum, a[1]*1000 + a[2]*100 + a[3] * 10 + a[0]);
    minNum = min(minNum, a[2]*1000 + a[3]*100 + a[0] * 10 + a[1]);
    minNum = min(minNum, a[3]*1000 + a[0]*100 + a[1] * 10 + a[2]);


    int ans = 0;

    for(int i = 1111; i<=minNum; i++)
    {
        string s = to_string(i);
        if(s[1] == '0' || s[2] == '0' || s[3] == '0')continue;
        if(visit[i] >= 1)continue;
        visit[(s[0]-'0')*1000 + (s[1]-'0')*100 + (s[2]-'0') * 10 + (s[3]-'0')] = 1;
        visit[(s[1]-'0')*1000 + (s[2]-'0')*100 + (s[3]-'0') * 10 + (s[0]-'0')] = 1;
        visit[(s[2]-'0')*1000 + (s[3]-'0')*100 + (s[0]-'0') * 10 + (s[1]-'0')] = 1;
        visit[(s[3]-'0')*1000 + (s[0]-'0')*100 + (s[1]-'0') * 10 + (s[2]-'0')] = 1;
        ans++;
    }

    cout << ans;
}

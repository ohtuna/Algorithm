#include<iostream>
#include<string>
#include<map>
#include<set>
#include<map>

using namespace std;

map<string,int> cnt;

int main()
{
    int n;
    cin >> n;

    for(int i =0; i<n; i++)
    {
        string s;
        cin >> s;

        cnt[s]++;
    }

    map<string,int>::iterator it;
    it = cnt.begin();
    string ans;
    int max_cnt = 0;

    while(it!=cnt.end())
    {
        if(max_cnt < it->second)
        {
            ans = it->first;
            max_cnt = it->second;
        }
        it++;
    }

    cout << ans;
    
}

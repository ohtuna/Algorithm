#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    string ans = "";

    int idx = 0;
    int cnt = 0;

    while(idx < s.size())
    {
        ans.push_back(s[idx]);
        cnt++;
        idx += cnt;
    }

    cout<< ans;
}

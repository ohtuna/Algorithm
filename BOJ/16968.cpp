#include<iostream>
#include<string>
#include<vector>

using namespace std;

int go(string &s, int idx, char last)
{
    if(s.length() == idx) return 1;

    char start = (s[idx] == 'c' ? 'a' : '0');
    char end = (s[idx] == 'c' ? 'z' : '9');

    int ans = 0;
    for(int i = start; i<=end; i++)
    {
        if(i != last)
        {
            ans += go(s, idx+1, i);
        }
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;

    int ans = go(s, 0, ' ');

    cout << ans;

    

}

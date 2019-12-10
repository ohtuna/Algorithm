#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string ans = "";
    while(n > 0)
    {
        ans.push_back((n%9) + '0');
        n/=9;
    }

    for(int i = ans.size()-1; i>=0; i--)
    {
        cout << ans[i];
    }
}

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int temp = 0;
    int cnt = 0;
    if(s.size() == 1)
    {
        temp = stoi(s);
        if(temp%3 == 0)
        {
            cout << cnt << "\n";
            cout << "YES" << "\n";
        }
        else
        {
            cout << cnt << "\n";
            cout << "NO" << "\n";
        }
        return 0;
    }

    
    while(s.size() > 1)
    {
        int sum = 0;
        for(int i =0; i<s.size(); i++)
        {
            sum += (s[i]-'0');
        }
        s = to_string(sum);
        cnt++;
    }

    cout << cnt << "\n";
    
    int t = stoi(s);
    if(t % 3 ==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    




}

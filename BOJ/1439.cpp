#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;

    string str;

    cin >> str;

    char temp = str[0];
    int cnt = 0;
    for(int i =0; i<str.size(); i++)
    {
        if(temp == str[i])
        {
            cnt++;
        }
        else
        {
            if(temp == '0')
            {
                a.push_back(cnt);
                temp = '1';
                cnt = 1;
            }
            else
            {
                b.push_back(cnt);
                temp = '0';
                cnt = 1;
            }
        }
    }

    if(cnt > 0)
    {
        if(temp == '0')
        {
            a.push_back(cnt);
        }
        else
        {
            b.push_back(cnt);
        }
    }

    if(a.size() > b.size())
    {
        cout << b.size();
    }
    else
    {
        cout << a.size();
    }
    
}

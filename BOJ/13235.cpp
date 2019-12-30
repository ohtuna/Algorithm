#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = 0;
    int m = s.size()-1;

    bool flag = true;

    while(n<m)
    {
        if(s[n] != s[m])
        {
            flag = false;
            break;
        }
        n++;
        m--;
    }

    if(flag == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    
}

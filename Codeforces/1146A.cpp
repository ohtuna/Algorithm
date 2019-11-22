#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int Acnt = 0;
    for(int i =0; i <s.size(); i++)
    {
        if(s[i] == 'a')
        {   
            Acnt++;
        }
    }

    if(Acnt > s.size()/2)
    {
        cout << s.size();
    }
    else
    {
        int len = s.size();
        int cnt = 0;
        while(1)
        {
            len--;
            cnt++;
            if(Acnt*2 > len)break;
        }

        cout << s.size() - cnt;
    }
    
    
}

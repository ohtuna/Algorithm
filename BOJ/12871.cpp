#include<iostream>
#include<string>

using namespace std;


int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b, a%b);
    }
}
int LCM(int a, int b)
{
    return a*b/GCD(a,b);
}


int main()
{
    string s;
    string t;

    cin >> s >> t;

    string temp1;
    string temp2;

    if(s.size() == t.size())
    {
        if(s == t)
        {
            cout << 1;
            return 0;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }

    int length = LCM(s.size(), t.size());

    for(int i = 0; i<length / s.size(); i++)
    {
        temp1 += s;
    }
    for(int i =0; i<length / t.size(); i++)
    {
        temp2 += t;
    }

    if(temp1 == temp2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}


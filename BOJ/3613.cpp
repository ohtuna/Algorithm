#include<iostream>
#include<string>

using namespace std;

int main()
{
    string p;

    cin >> p;

    bool c = false;
    bool upper = false;
    bool f = false;

    if(p[p.size()-1] == '_')
    {
        cout << "Error!";
        return 0;
    }
    for(int i = 0; i<p.size(); i++)
    {
        if(p[i] == '_' && p[i+1] == '_')
        {
            cout << "Error!";
            return 0;
        }
        if(p[i] >= 'A' && p[i] <= 'Z')
        {
            upper = true;
        }
        if(p[i]=='_')
        {
            c = true;
        }
    }

    if(c && upper)
    {
        cout << "Error!";
        return 0;
    }

    if(p[0]  >= 'a' && p[0] <= 'z')
    {
        string ans;
        //java -> c++
        if(c == false)
        {
            for(int i = 0; i<p.size(); i++)
            {
                if(p[i] >= 65 && p[i] <= 90)
                {
                    ans.push_back('_');
                    ans.push_back(p[i]+32);
                }
                else
                {
                    ans.push_back(p[i]);
                }

            }
        }
        else
        {
            for(int i =0; i<p.size(); i++)
            {

                if(p[i] == '_')
                {
                    ans.push_back(p[i+1]-32);
                    i++;
                    continue;
                }
                ans.push_back(p[i]);
            }
        }
        cout << ans;
    }
    else
    {
        cout << "Error!";
    }

}

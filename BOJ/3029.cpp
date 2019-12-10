#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    string s1;
    string s2;

    cin >> s1 >> s2;


    if(s1 == s2)
    {
        cout << "24:00:00";
        return 0;
    }

    int h, m, s;
    int eh, em, es;

    int cnt = 0;
    string temp;
    for(int i =0; i<s1.size(); i++)
    {
        if(s1[i] == ':')
        {
            if(cnt == 0)
            {
                h = stoi(temp);
            }
            else if(cnt == 1)
            {
                m = stoi(temp);
            }
            else
            {
                s = stoi(temp);
            }
            temp.clear();
            cnt++;
        }
        else
        {
            temp.push_back(s1[i]);
        }
    }
    s = stoi(temp);

    temp ="";
    cnt = 0;


    for(int i =0; i<s2.size(); i++)
    {
        if(s2[i] == ':')
        {
            if(cnt == 0)
            {
                eh = stoi(temp);
            }
            else if(cnt == 1)
            {
                em = stoi(temp);
            }
            else
            {
                es = stoi(temp);
            }
            temp.clear();
            cnt++;
        }
        else
        {
            temp.push_back(s2[i]);
        }
    }
    es = stoi(temp);


    int ansh = 0;
    int ansm = 0;
    int anss = 0;


    while(1)
    {
        if(h == eh && m == em && s == es) break;
        anss++;
        s++;
        if(anss == 60)
        {
            anss = 0;
            ansm++;
        }
        if(ansm == 60)
        {
            ansm = 0;
            ansh++;
        }

        if(s == 60)
        {
            s = 0;
            m++;
        }
        if(m == 60)
        {
            m = 0;
            h++;
        }
        if(h==24)
        {
            h = 0;
        }
    }

    string answer = "";
    string t = to_string(ansh);
    if(t.size() == 1)
    {
        answer.push_back('0');
        answer += t;
        answer += ':';
    }
    else
    {
        answer += t;
        answer += ':';
    }

    t = to_string(ansm);

    if(t.size() == 1)
    {
        answer.push_back('0');
        answer += t;
        answer += ':';
    }
    else
    {
        answer += t;
        answer += ':';
    }

    t = to_string(anss);

    if(t.size() == 1)
    {
        answer.push_back('0');
        answer += t;
    }
    else
    {
        answer += t;
    }


    cout << answer;

    



}

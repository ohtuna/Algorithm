#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string str;
    cin >> str;

    string temp;
    int ok = true;
    int cnt = 0;
    for(int i =0; i<str.size(); i++)
    {
        if(str[i] == 'X')
        {
            cnt++;
        }
        else
        {
            if(cnt %2 == 0)
            {
                int add = cnt;
                while(add > 0)
                {
                    temp += "AAAA";
                    add-=4;
                }
                if(add < 0)
                {
                    temp.pop_back();
                    temp.pop_back();
                    temp.pop_back();
                    temp.pop_back();
                    temp+="BB";

                }

                cnt = 0;

            }
            else
            {
                ok = false;
                break;
            }
            
        }
    }
    if(cnt >0 && cnt%2 != 0)
    {
        ok = false;
    }
    else
    {
        int add = cnt;
        while(add > 0)
        {
            temp += "AAAA";
            add-=4;
        }
        if(add < 0)
        {
            temp.pop_back();
            temp.pop_back();
            temp.pop_back();
            temp.pop_back();
            temp+="BB";

        }
    }
    


    if(ok == true)
    {
        int pos = 0;
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i] == '.')continue;
            if(pos == temp.size())break;
            if(str[i] == 'X')
            {
                str[i] = temp[pos];
                pos++;
            }
        }

        cout << str;
    }
    else
    {
        cout << -1;
    }
    

}

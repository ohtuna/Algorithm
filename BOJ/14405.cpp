#include<iostream>
#include<string>

using namespace std;



int main()
{
    bool answer = true;
    string str;
    cin >> str;

    for(int i =0; i<str.size(); i++)
    {
        if(str[i] == 'p' && i+1 < str.size())
        {
            if(str[i+1] == 'i')
            {
                i+=1;
            }
            else
            {
                answer = false;
                break;
            }
        }
        else if(str[i] == 'k' && i+1 <str.size())
        {
            if(str[i+1] == 'a')
            {
                i+=1;
            }
            else
            {
                answer = false;
                break;
            }
        }
        else if(str[i] == 'c' && i+2 < str.size())
        {
            if(str[i+1] == 'h' && str[i+2] == 'u')
            {
                i+=2;
            }
            else
            {
                answer= false;
                break;
            }
        }
        else
        {
            answer = false;
            break;
        }
    }

    if(answer == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}

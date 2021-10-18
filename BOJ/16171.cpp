#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string str1;
    string str2;
    string temp;


    cin >> str1 >> str2;

    for(int i =0; i<str1.size(); i++)
    {
        if(str1[i] >='0' && str1[i] <='9')continue;
        temp.push_back(str1[i]);
    }

    bool check = false;
    for(int i =0; i<temp.size(); i++)
    {
        for(int j = 0; j<str2.size(); j++)
        {
            if(i + str2.size() <= temp.size())
            {
                if(temp[i+j] != str2[j])
                {
                    check = false;
                    break;
                }
                check = true;
            }
        }
        if(check == true)break;
    }

    if(check == true)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }






}

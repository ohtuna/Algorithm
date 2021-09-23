#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    string remainder;


    getline(cin, str);


    int idx = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(idx ==0 && str[i] == 'U')
        {
            idx++;
        }
        if(idx==1 && str[i] == 'C')
        {
            idx++;
        }
        if(idx==2 && str[i] == 'P')
        {
            idx++;
        }
        if(idx==3 && str[i] == 'C')
        {
            idx++;
        }

    }

    if(idx==4)
    {
        cout << "I love UCPC";
    }
    else
    {
        cout << "I hate UCPC";
    }


}

#include<iostream>
#include<string>

using namespace std;


int arr[30];

int main()
{
    int n;
    cin >>n;

    for(int tc = 0; tc < n; tc++)
    {
        for(int i = 0; i<30 ;i++)
        {
            arr[i] = 0;
        }
        string str;
        cin >> str;
        bool find = true;

        for(int i =0; i<str.size(); i++)
        {
            if(arr[str[i] - 'A'] < 2)
            {
                arr[str[i]-'A']++;
            }
            else
            {
                arr[str[i] - 'A'] = 0;
                if(i+1 < str.size())
                {
                    if(str[i] == str[i+1])
                    {
                        i++;
                    }
                    else
                    {
                        find = false;
                        break;
                    }
                }
                else
                {
                    find = false;
                    break;
                }
            }
        }
        if(find == false)
        {
            cout << "FAKE";
        }
        else
        {
            cout << "OK";
        }

        cout << "\n";
    }
}

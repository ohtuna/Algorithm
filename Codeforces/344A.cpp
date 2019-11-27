#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int cnt = 0;
    string temp = "";
    for(int i =0; i<n; i++)
    {
        string str;
        cin >> str;
        if(temp == "")
        {
            temp = str;
            cnt++;
        }
        else
        {
            if(temp == str) continue;
            else
            {
                cnt++;
                temp = str;
            }
            
        }   
    }
    cout << cnt;
}

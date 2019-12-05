#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
    int arr[3] = {1,0,0};

    string s;

    cin >> s;

    for(int i =0; i<s.size(); i++)
    {
        if(s[i] == 'A')
        {
            swap(arr[0], arr[1]);
        }
        else if(s[i] == 'B')
        {
            swap(arr[1], arr[2]);
        }
        else
        {
            swap(arr[0], arr[2]);
        }
    }

    for(int i =0; i<3; i++)
    {
        if(arr[i] == 1)
        {
            cout << i+1;
        }
    }
}

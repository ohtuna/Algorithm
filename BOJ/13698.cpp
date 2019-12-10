#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    int a[4] ={1, 0, 0, 2};
    string cmd;

    cin >> cmd;

    for(int i =0; i<cmd.size(); i++)
    {
        if(cmd[i] == 'A')
        {
            swap(a[0], a[1]);
        }
        else if(cmd[i] == 'B')
        {
            swap(a[0], a[2]);
        }
        else if(cmd[i] == 'C')
        {
            swap(a[0], a[3]);
        }
        else if(cmd[i] == 'D')
        {
            swap(a[1], a[2]);
        }
        else if(cmd[i] == 'E')
        {
            swap(a[1], a[3]);
        }
        else
        {
            swap(a[2], a[3]);
        }
    }

    int small = 0;
    int large = 0;
    for(int i =0; i<4; i++)
    {   
        if(a[i] == 1) small = i;
        if(a[i] == 2) large = i;
    }


    cout << small + 1 << "\n";
    cout << large + 1 << "\n";

}

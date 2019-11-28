#include<iostream>
#include<string>

using namespace std;

string seat[1001];
int n;

int main()
{
    cin >> n;

    for(int i =0; i<n; i++)
    {
        cin>>seat[i];
    }

    bool flag = false;
    for(int i =0; i<n; i++)
    {
        if(seat[i][0] == 'O' && seat[i][1] == 'O' )
        {
            seat[i][0] = '+';
            seat[i][1] = '+';
            flag= true;
            break;
        }
        if(seat[i][3] == 'O' && seat[i][4] == 'O')
        {
            seat[i][3] = '+';
            seat[i][4] = '+';
            flag = true;
            break;
        }
    }

    if(flag == true)
    {
        cout << "YES" << "\n";
        for(int i =0; i<n; i++)
        {
            cout << seat[i] << "\n";
        }
    }
    else
    {
        cout << "NO";
    }
    
}

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string table;

    cin >> table;

    string card[5];

    for(int i =0; i<5; i++)
    {
        cin >> card[i];
    }

    for(int i =0; i<5; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(table[0] == card[i][0] || table[1] == card[i][1])
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}

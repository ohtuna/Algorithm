#include<iostream>

using namespace std;

int map[11][11];

int main()
{

    int n;

    cin >> n;

    for(int i =1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i==1 || j==1) {
                map[i][j] = 1;
            }
            else
            {
                map[i][j] = map[i-1][j] + map[i][j-1];
            }
        }
    }
    cout << map[n][n];
    
}

#include<iostream>
#include<string>

using namespace std;

long long koong[68];

int main()
{

    int t;
    koong[0] = 1;
    koong[1] = 1;
    koong[2] = 2;
    koong[3] = 4;

    for(int i =4; i<=67; i++)
    {
        koong[i] = koong[i-1] + koong[i-2] + koong[i-3] + koong[i-4];
    }

    cin >> t;

    while(t--)
    {
        int temp;
        cin >> temp;

        cout << koong[temp] << "\n";
    }
    
}

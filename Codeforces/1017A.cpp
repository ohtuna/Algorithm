#include<iostream>

using namespace std;


int Rank[401];

int main()
{
    int n;
    cin >> n;

    int thomas = 0;
    for(int i =0; i<n; i++)
    {
        int sum = 0;
        for(int j =0; j<4; j++)
        {
            int s;
            cin >> s;
            sum += s;
        }
        if(i == 0)thomas = sum;
        Rank[sum]++;
    }

    int ans = 0;
    for(int i =400; i>thomas; i--)
    {
        if(Rank[i] > 0)
        {
            ans += Rank[i];
        }
    }

    cout << ans + 1;

}

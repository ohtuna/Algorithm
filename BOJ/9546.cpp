#include<iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    for(int i =0; i<tc; i++)
    {
        int k;
        cin >> k;

        double p = 1.0;
        double add= 0.5;

        for(int i =1; i<k; i++)
        {
            p+=add;
            p*=2;
        }

        int ans = p;

        cout << ans << "\n";
    }
}

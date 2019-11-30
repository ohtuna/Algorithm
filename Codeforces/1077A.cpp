#include<iostream>

using namespace std;

int main()
{
    int q;

    cin >> q;

    for(int i =0; i<q; i++)
    {
        long long a,b,k;

        cin >> a >> b >> k;

        long long ans = 0;

        if(k%2 == 0)
        {   
            ans = (a*(k/2)) + (-b*(k/2));
        }
        else
        {
            ans = (a*(k/2)) + (-b*(k/2)) + a;
        }
        
        cout << ans << "\n";
    }
}

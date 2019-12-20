#include<iostream>
#include<memory.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i =0; i<n; i++)
    {
        int number[1001] = {0,};
        int v;
        cin >> v;

        for(int j =0; j<v; j++)
        {
            int temp;
            cin >> temp;
            number[temp]++;
        }


        int mmax = -1;
        int ans = 0;
        for(int j = 1; j<=1000; j++)
        {
            if (mmax == -1 || number[j] > mmax)
            {
                mmax = number[j];
                ans = j;
            }
        }

        cout << ans << "\n";
    }
}

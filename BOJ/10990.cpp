#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int left = n-1;
    int cnt = 0;
    if(n==1)
    {
        cout << "*";
        return 0;
    }
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n*2-1; j++)
        {
            if(j == left)
            {
                cout << "*";
                left--;
                if(i==0)break;
                for(int k = left+1; k<n+cnt-1; k++)
                {
                    cout << " ";
                }
               
                cout << "*";
                cnt++;
                break;
            }
            else
            {
                cout << " ";
            }
        }
        if(i <= n-2)
        {
            cout << "\n";
        }
    }
}

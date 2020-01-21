#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;


    int cnt = n;
    for(int i = 0; i<2*n-1; i++)
    {
        if((2*n) / 2 > i)
        {
            cnt--;
        }
        else
        {
            cnt++;
        }
        for(int j = 0; j<n; j++)
        {
            if(cnt <=j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

           
        cout << "\n";
    }
}

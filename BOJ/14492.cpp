#include<iostream>

using namespace std;

int A[301][301];
int B[301][301];
int C[301][301];

int main()
{
    int n;
    cin >> n;

    for(int y = 0; y<n; y++)
    {
        for(int x = 0; x <n; x++)
        {
            cin >> A[y][x];
        }
    }

    for(int y = 0; y<n; y++)
    {
        for(int x= 0; x<n; x++)
        {
            cin >> B[y][x];
        }
    }

    for(int y = 0; y<n; y++)
    {
        int temp = 0;
        for(int x =0; x<n; x++)
        {
            for(int k =0; k<n; k++)
            {
                C[y][x] |= (A[y][k] & B[k][x]);
            }
        }
    }


    int cnt = 0;
    for(int y = 0; y<n; y++)
    {
        for(int x =0; x<n; x++)
        {
            if(C[y][x]==1)cnt++;
        }
    }

    cout << cnt;




}

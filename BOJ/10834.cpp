#include<iostream>

using namespace std;

int Change_Rotate(int r, int cur_r)
{
    if(r == 0) return cur_r;

    return (cur_r+1)%2;
}

int main()
{
    int n;

    cin >> n;

    int cur_rotate = 0;
    long long ansA = 0;
    long long ansB = 0;
    for(int i =0; i<n; i++)
    {
        long long a, b, r;
        cin >> a >> b >> r;
        cur_rotate = Change_Rotate(r, cur_rotate);
        if(i == 0)
        {
            ansA = a;
            ansB = b;
        }
        else
        {
            ansA *= a;
            ansB *= b;
            if(ansB % ansA == 0)
            {
                ansB = ansB / ansA;
                ansA = 1;
            }
        }
    }
    cout << cur_rotate << " " << ansB/ansA;
}

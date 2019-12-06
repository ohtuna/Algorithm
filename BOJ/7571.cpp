#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int y[100001];
int x[100001];

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i =0; i<m; i++)
    {
        cin >> y[i] >> x[i];
    }

    sort(y, y+m);
    sort(x, x+m);

    int Y = y[m/2];
    int X = x[m/2];

    int sum = 0;
    for(int i =0; i<m/2; i++)
    {
        sum += (X-x[i]) + (Y-y[i]);
    }
    for(int i = m/2; i<m; i++)
    {
        sum += (x[i]-X) + (y[i]-Y);
    }    

    cout << sum;

}

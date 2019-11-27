#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int fence;
    int sum = 0;
    for(int i =0; i<n; i++)
    {
        cin >>fence;
        int cnt = 0;
        while(fence >0)
        {
            fence -=h;
            cnt++;
        }
        sum += cnt;
    }
    cout << sum;
}

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n, m, cnt;
    cin >> n >> m >> cnt;

    int left = 1;
    int right = m;

    vector<int>apple(cnt);
    for(int i =0; i<cnt; i++)
    {
        cin >> apple[i];
    }

    int move = 0;
    for(int i =0; i<cnt; i++)
    {
        if(apple[i] >= left && apple[i] <= right) continue;
        if(apple[i] < left)
        {
            int dist = left - apple[i];
            move += dist;
            left -= dist;
            right -= dist;
        }
        else if(apple[i] > right)
        {
            int dist = apple[i] - right;
            move += dist;
            left += dist;
            right += dist;
        }
    }

    cout << move;
}

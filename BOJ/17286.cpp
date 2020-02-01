#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>


using namespace std;

int sy, sx;
vector<pair<double,double>>p;
vector<pair<double,double>>moving_list;
int visit[3];
int ans = -1;
int doubles(int a)
{
    return a*a;
}

void go(int depth)
{
    if(depth == 3)
    {
        int sum = sqrt(doubles(moving_list[0].first - sy) + doubles(moving_list[0].second - sx)) + sqrt(doubles(moving_list[1].first - moving_list[0].first) + doubles(moving_list[1].second - moving_list[0].second))
        + sqrt(doubles(moving_list[2].first - moving_list[1].first) + doubles(moving_list[2].second - moving_list[1].second));
        if(ans == -1 || ans > sum)
        {
            ans = sum;
        }

        return;
    }
    for(int i =0; i<3; i++)
    {
        if(visit[i] == 1) continue;
        visit[i] = 1;
        moving_list.push_back(p[i]);
        go(depth+1);
        visit[i] = 0;
        moving_list.pop_back();
    }
}
int main()
{
    
    cin >> sy >> sx;
    

    for(int i = 0; i<3; i++)
    {
        int ey, ex;
        cin >> ey >> ex;

        p.push_back({ey,ex});
    }

    go(0);

    cout << ans;
    
    

}

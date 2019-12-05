#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int start;
    cin >> start;
    int q;
    cin >> q;

    vector<pair<int,char>>qu;
    for(int i =0; i < q; i++)
    {
        int n;
        char a;
        cin >> n >> a;
        qu.push_back({n, a});
    }

    int sec = 0;
    for(int i =0; i<qu.size(); i++)
    {
        sec += qu[i].first;
        if(sec > 210) break;
        if(qu[i].second == 'T')
        {
            start++;
            if(start == 9)
            {
                start = 1;
            }
        }
    }
    cout << start;
}

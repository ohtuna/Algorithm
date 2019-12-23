#include<iostream>
#include<set>

using namespace std;

set<pair<int,int>>visit;

int main()
{
    int n;
    cin >> n;

    for(int i =0; i<n; i++)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2>>y2;

        for(int y = y1; y<y2; y++)
        {
            for(int x = x1; x<x2; x++)
            {
                if(visit.count({y,x}) == 0)
                {
                    visit.insert({y,x});
                }
            }
        }
    }

    cout << visit.size();
}

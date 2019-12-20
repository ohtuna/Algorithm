#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool ccmp(pair<int,int>a, pair<int,int>b)
{
    if(a.first < b.first) return true;
    if(a.first == b.first)
    {
        if(a.second < b.second) return true;
    }
    return false;
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<pair<int,int>>order;

    for(int i =0 ; i<n; i++)
    {
        string s;
        cin >> s;

        int table, time;

        if(s == "order")
        {
            cin >> table >> time;
            order.push_back({time, table});
        }
        else if(s== "sort")
        {
            sort(order.begin(), order.end(), ccmp);
        }
        else
        {
            cin >> table;
            int index = 0;
            for(int j =0; j<order.size(); j++)
            {
                if(table == order[j].second)
                {
                    index = j;
                }
            }
            order.erase(order.begin()+index);
        }

        if(order.size() == 0)
        {
            cout << "sleep" << "\n";
        }
        else
        {
            
            for(int j =0; j<order.size(); j++)
            {
                cout << order[j].second << " "; 
            }
            cout << "\n";
        }
        
        
    }

}

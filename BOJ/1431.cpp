#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int ccmp(pair<string,int>a, pair<string,int>b)
{
    if(a.first.size() != b.first.size()) return a.first.size() < b.first.size();
    if(a.first.size() == b.first.size())
    {
        if(a.second != b.second) return a.second < b.second;
    }
    return a.first < b.first;
    
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string,int>>v(n);

    for(int i =0; i<n; i++)
    {
        string temp;
        cin >> temp;
        
        int sum = 0;
        for(int j = 0; j<temp.size(); j++)
        {
            if(temp[j] >= '0' && temp[j] <='9')
            {
                sum += temp[j] - '0';
            }
        }
        v[i].first = temp;
        v[i].second = sum;
    }

    sort(v.begin(), v.end(), ccmp);

    for(int i =0; i<n; i++)
    {
        cout << v[i].first << "\n";
    }
}

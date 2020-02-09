#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int n;

vector<int>a;
vector<int>b;


void change(vector<int>&a, int idx)
{
    for(int i = idx-1; i<=idx+1; i++)
    {
        if(0<=i && i<a.size())
        {
            a[i] = 1-a[i];
        }
    }
}

pair<bool, int> go(vector<int> a, vector<int> &b)
{
    int n = a.size();
    int ans = 0;

    for(int i = 0; i<n-1; i++)
    {
        if(a[i] != b[i])
        {
            change(a, i+1);
            ans+=1;
        }
    }
    if(a == b) return make_pair(true, ans);
    else return make_pair(false, ans);
}
int main()
{
    cin >> n;
    for(int i =0; i<n; i++)
    {
        int temp;
        scanf("%1d", &temp);
        a.push_back(temp);
    }
    for(int i =0; i<n; i++)
    {
        int temp;
        scanf("%1d", &temp);
        b.push_back(temp);
    }

    pair<bool, int> p1 = go(a, b);
    change(a, 0);
    pair<bool, int> p2 = go(a, b);
    if(p2.first )
    {
        p2.second += 1;
    }

    if(p1.first && p2.first)
    {
        cout << min(p1.second , p2.second);
    }
    else if(p1.first)
    {
        cout << p1.second;
    }
    else if(p2.first)
    {
        cout << p2.second;
    }
    else
    {
        cout << -1;
    }
    

}

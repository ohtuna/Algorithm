#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

int check[10];
vector<int>a;
vector<int>selected;
int n, k;
set<int>visit;

void go(int depth)
{
    if(depth == k)
    {
        string temp;
        for(int i =0; i<selected.size(); i++)
        {
            string t = to_string(selected[i]);
            temp+=t;
        }
        visit.insert(stoi(temp));
        return;
    }

    for(int i =0; i<n; i++)
    {
        if(check[i] == 0)
        {
            check[i] = 1;
            selected.push_back(a[i]);
            go(depth+1);
            check[i] = 0;
            selected.pop_back();
        }
    }
}

int main()
{
    
    cin >> n >> k;

    a.resize(n);

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }

    go(0);

    cout << visit.size();

}

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int l, r;

    cin >> l >> r;

    vector<int>tree;
    tree.push_back(l);
    while(1)
    {
        int temp = tree.back() * r / 100;
        if(temp >5)
        {
            tree.push_back(temp);
        }
        else break;
    }

    int sum = 0;
    int cnt = 2;
    for(int i = 1; i<tree.size(); i++)
    {
        sum += tree[i] * cnt;
        cnt*=2;
    }

    cout << sum;
}

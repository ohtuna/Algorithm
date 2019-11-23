#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;

    for(int i = 0; i<9; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0; i<9; i++)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }

    bool flag = false;
    int sumA = 0;
    int sumB = 0;
    for(int i =0; i<9; i++)
    {
        sumA += a[i];
        if(sumA > sumB) flag = true;
        sumB += b[i];

    }

    cout << (flag ? "Yes" : "No");
    


}

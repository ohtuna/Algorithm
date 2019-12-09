#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int tc;
    cin >>tc;

    for(int i = 1; i<=tc; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cin.ignore();
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);

        sort(temp.begin(), temp.end());
        if(temp[0]*temp[0]+temp[1]*temp[1] == temp[2]*temp[2])
        {
            cout << "Scenario #"<<i<<":" <<"\n";
            cout << "yes" << "\n";
        }
        else
        {
            cout << "Scenario #"<<i<<":" <<"\n";
            cout << "no" << "\n";
        }

        cout << "\n";
    }
}

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int q;

    cin >> q;

    vector<long long>candies;

    for(int i = 0; i<q; i++)
    {
        for(int j = 0; j<3; j++)
        {
            long long temp;
            cin >> temp;
            candies.push_back(temp);
        }

        sort(candies.begin(), candies.end());

        long long Alice = candies[0];
        long long Bob = candies[1];

        long long add = Bob-Alice;
        
        if(candies[2] - add <= 0)
        {
            Alice += add;
        }
        else
        {
            candies[2] -= add;
            Alice += add;
            Alice += (candies[2] / 2);
            Bob += (candies[2]/ 2);

        }   
        cout << min(Alice, Bob) << "\n";


        candies.clear();



    }
}

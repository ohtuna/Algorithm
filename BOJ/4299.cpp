#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int sum;
    int diff;

    cin >> sum >> diff;

    int ans1 = -1;
    int ans2 = -1;

    for(int x1 =0; x1<=1000; x1++)
    {
        for(int x2 = 0; x2<=1000; x2++)
        {
            if(x1+x2 == sum && x1-x2 == diff)
            {
                ans1 = x1;
                ans2 = x2;
            }
        }
    }
    if(ans1 == -1 && ans2 == -1)
    {
        cout << -1;
    }
    else
    {
            cout << max(ans1,ans2) << " " << min(ans1, ans2);
    }
    


}

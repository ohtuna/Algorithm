#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    int minIndex = -1;
    int minscore = -1;

    int sum = 0;
    for(int i =0;i<3; i++)
    {
        sum += a[i];
        if(minscore == -1 || minscore > a[i])
        {
            minIndex = i;
            minscore = a[i];
        }
    }

    if(sum >=100)
    {
        cout << "OK";
    }
    else
    {
        if(minIndex == 0)
        {
            cout << "Soongsil";
        }
        else if(minIndex == 1)
        {
            cout << "Korea";
        }
        else
        {
            cout << "Hanyang";
        }
        
    }
    


}

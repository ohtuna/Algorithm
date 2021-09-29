#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

    while(1)
    {
        int a, b,c;
        cin >> a >> b>> c;
        if(cin.fail())break;

        cout << max(c-b-1, b-a-1) << "\n";



    }
}

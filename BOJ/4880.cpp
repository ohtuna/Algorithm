#include<iostream>
#include<vector>

using namespace std;

int main()
{
    while(1)
    {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        if(a1 ==0 && a2 ==0 && a3 ==0) break;

        int d = a2 - a1;
        int r = a2 / a1;

        if(a3-a2 == d)
        {
            cout << "AP" << " " << a3+d << "\n";
        }
        else if(a3 / a2 == r)
        {
            cout << "GP" << " " << a3 * r << "\n";
        }
        

    }
}

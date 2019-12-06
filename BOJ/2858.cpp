#include<iostream>

using namespace std;

int main()
{
    int r, b;

    cin >> r >> b;


    for(int x = 3; x<5000; x++)
    {
        for(int y = x; y>=3; y--)
        {
            if(r+b == x*y && r == 2*x+2*y - 4)
            {
                cout << x << " " << y << "\n";
            }
        }
    }

    return 0;

}

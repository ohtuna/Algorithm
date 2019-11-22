#include<iostream>
#include<math.h>

using namespace std;

int map[8][8];

int main()
{
    int ly = 0;
    int lx = 0;
    for(int y=1;y<=5;y++)
    {
        for(int x=1;x<=5;x++)
        {
            cin>>map[y][x];
            if(map[y][x] == 1)
            {
                ly = y;
                lx = x;
            }
        }
    }

    cout << abs(ly-3) + abs(lx -3);





}

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    a--;
    b--;

    int y1 = a%4;
    int x1 = a/4;
    int y2 = b%4;
    int x2 = b/4;

    cout << abs(y2 - y1) + abs(x2 - x1);

}

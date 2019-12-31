#include<iostream>
#include<math.h>
#include<cstdlib>
#include<algorithm>

using namespace std;


int terit()
{
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    // <math.h> header file을 include해주고 사용.

    if ( (x1 == x2) && (y1 == y2) ) // terit a와 b의 좌표가 같을 경우
    {
        if ( r1 == r2 ) // 거리가 동일할 경우
            return -1;
        else
            return 0;
    }
    else if ( ((r1 + r2) > d ) && ((r1 + d) > r2) && ((r2 + d) > r1) )
            // terit a, b의 좌표와 적 c의 좌표가 삼각형을 이룰 수 있는 경우
        return 2;
    else if ( ((r1 + r2) == d ) || ((r1 + d) == r2) || ((r2 + d) == r1) )
            // terit a, b의 좌표와 적 c의 좌표가 직선 상에 있는 경우
        return 1;
    else
        return 0;
}

int main()
{
    int tc;

    cin >> tc;

    for(int t = 0; t<tc; t++)
    {

        cout << terit() << "\n";    
    }
}

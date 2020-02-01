#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(1)
    {
        int h, w;

        cin >> h >> w;
        if(h == 0 && w == 0) break;

        int ansY = 0;
        int ansX = 0;
        double total = -1;
        for(int i = 1; i<= 150; i++)
        {
            for(int j = i; j<= 150; j++)
            {
                if(i==j) continue;
                if(h ==i && w == j) continue;
                if(sqrt((h*h) + (w*w)) == sqrt((i*i) + (j*j)))
                {
                    if(i<=h)continue;
                }
                if( sqrt((h*h)  +  (w * w)) <= sqrt((i * i) + (j * j)))
                {
                    if(total == -1 || total > sqrt((i*i) + (j*j)))
                    {
                        total = sqrt((i*i) + (j*j));
                        ansY = i;
                        ansX = j;
                    }
                    else if(total == sqrt((i*i) + j*j))
                    {
                        if(ansY > i)
                        {
                            ansY = i;
                            ansX = j;
                        }
                    }
                }
            }
        }

        cout << ansY  << " "  << ansX << "\n";


    }
}

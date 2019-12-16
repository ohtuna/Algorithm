#include<iostream>

using namespace std;

int pig[6];
int main()
{
    int tc;
    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        int feed;
        cin >> feed;
        for(int i =0; i<6; i++)
        {
            cin >> pig[i];
        }

        int day = 1;
        while(1)
        {
            bool fail=false;
            int copyfeed = feed;
            for(int j = 0; j<6; j++)
            {
                copyfeed -= pig[j];
                if(copyfeed < 0)
                {
                    fail = true;
                    break;
                }
            }
            if(fail == true)break;
            //다음날 돼지 값 갱신
            int copypig[6] = {0, };

            copypig[0] = pig[0] + pig[5] + pig[1] + pig[3];
            copypig[1] = pig[1] + pig[0] + pig[2] + pig[4];
            copypig[2] = pig[2] + pig[1] + pig[3] + pig[5];
            copypig[3] = pig[3] + pig[2] + pig[4] + pig[0];
            copypig[4] = pig[4] + pig[3] + pig[5] + pig[1];
            copypig[5] = pig[5] + pig[0] + pig[4] + pig[2];

            for(int i =0; i<6; i++)
            {
                pig[i] = copypig[i];
            }
            day++;

        }

        cout << day << "\n";
    }
}

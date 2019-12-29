#include<iostream>
#include<string>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
    string s;
    int cnt = 0;
    vector<int>work(7);
    while(cin >> s)
    {
        cnt++;
        if(s == "Re")
        {
            work[0]++;
        }
        else if(s == "Pt")
        {
            work[1]++;
        }
        else if(s == "Cc")
        {
            work[2]++;
        }
        else if(s == "Ea")
        {
            work[3]++;
        }
        else if(s == "Tb")
        {
            work[4]++;
        }
        else if(s == "Cm")
        {
            work[5]++;
        }
        else if(s == "Ex")
        {
            work[6]++;
        }                                
    }

    vector<double>ans;
    for(int i =0; i< 7; i++)
    {
        ans.push_back((double)work[i]/cnt);
    }

    printf("Re %d %.2lf\n", work[0], ans[0]);
    printf("Pt %d %.2lf\n", work[1], ans[1]);
    printf("Cc %d %.2lf\n", work[2], ans[2]);
    printf("Ea %d %.2lf\n", work[3], ans[3]);
    printf("Tb %d %.2lf\n", work[4], ans[4]);
    printf("Cm %d %.2lf\n", work[5], ans[5]);
    printf("Ex %d %.2lf\n", work[6], ans[6]);
    printf("Total %d 1.00\n", cnt); 
}

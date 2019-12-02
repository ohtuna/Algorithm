#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int score[101];

int main()
{
    int n;

    cin >> n;

    if(n==0)
    {
        cout << "divide by zero";

        return 0;
    }
    double sum = 0.0;
    for(int i =0; i<n; i++)
    {
        int temp;
        cin >> temp;
        score[temp]++;
        sum += temp;
    }
    sum /= (double)n;

    double k = 0.0;
    for(int i = 0; i<=100; i++)
    {
        if(score[i] > 0)
        {  
            k += (((double)i * (double)score[i]) / (double)n);

        }
    }

    double ans = 0.0;
    ans = (double)sum / (double)k;
    
    if(k == 0.0)
    {
        cout << "divide by zero";
    }
    else
    {
        printf("%.2lf", ans);
    }
    
    
    
}

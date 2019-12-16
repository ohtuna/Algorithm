#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>

using namespace std;

double student[7];


int main()
{
    int n;

    for(int i =0; i<7; i++)
    {
        student[i] = -1.0;
    }
    scanf("%d", &n);

    bool first = false;
    for(int i =0; i<n; i++)
    {
        double temp;
        
        scanf("%lf", &temp);

        int cnt = 0;
        for(int j = 0; j<7; j++)
        {
            if(student[j] == -1.0)
            {
                student[j] = temp;
                break;
            }
            if(student[j] != -1.0) cnt++;
        }
        if(cnt == 7) 
        {
            sort(student, student+7);
            if(student[6] > temp)
            {
                student[6] = temp;
            }
        }
    }
    sort(student, student+7);
    for(int i =0; i<7; i++)
    {
        printf("%.3lf\n", student[i]);
    }
}

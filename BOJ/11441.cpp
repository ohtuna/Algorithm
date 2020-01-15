#include<iostream>
#include<cstdio>

using namespace std;

int sum[100001];

int main()
{
    int n;
    scanf("%d", &n);

    for(int i =1; i<=n; i++)
    {
        int num;
        scanf("%d", &num);
        sum[i] = sum[i-1] + num;
    }


    int m;
    scanf("%d", &m);

    for(int i =0; i<m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", sum[b]-sum[a-1]);
    }
}

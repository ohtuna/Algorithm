#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    for(int i =0; i<n; i++)
    {
        int x;

        scanf("%d", &x);
        int cc, c = 0;
        while(x > 0)
        {
            cc = x/5;
            c+= cc;
            x = cc;
        }

        printf("%d\n", c);
    }
}

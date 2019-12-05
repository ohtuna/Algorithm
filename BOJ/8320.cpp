#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int sum = 0;

    //홀수 짝수 구별해야겠네
    for(int i =1; i<=n; i++)
    {
        for(int j = 1; j<=sqrt(i); j++)
        {
            if(i%j == 0)
            {
                sum+=1;
            }
        }
        
    }

    cout << sum;
}

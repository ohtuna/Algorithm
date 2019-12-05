#include<iostream>
#include<math.h>


using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i =1; i<=sqrt(n); i++)
    {
        int temp = 1+i+(i*i);
        if(n == temp)
        {
            cout << i;
            return 0;
        }
    }
}

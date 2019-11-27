#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int total = 2;
    int add = 2;
    int cnt = 0;
    for(int i = 2; i<=n; i++)
    {
        if(cnt < 2)
        {   
            total+= add;
            cnt++; 
        }
        else
        {
            cnt = 1;
            add++;
            total+=add;
        } 
    }
    
    cout << total;
}

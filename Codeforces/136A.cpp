#include<iostream>

using namespace std;

int arr[101];

int main()
{
    int n;
    cin >> n;

    for(int  i =1; i<=n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp] = i;
    }

    for(int i = 1; i<=n; i++)
    {
        cout << arr[i] << " ";
    }

}

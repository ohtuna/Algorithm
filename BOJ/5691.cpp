#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    while(1)
    {
        int arr[2];
        cin >> arr[0] >> arr[1];
        if(arr[0] == 0 && arr[1] == 0) break;
        sort(arr, arr+2);

        cout << arr[0] * 2 - arr[1] << "\n"; 


    }
}

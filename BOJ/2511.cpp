#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int sum1 = 0;
    int sum2 = 0;

    int arr1[10];
    int arr2[10];

    for(int i =0; i<10; i++)
    {
        cin >> arr1[i];
    }
    for(int i =0; i<10; i++)
    {
        cin >> arr2[i];
    }
    
    for(int i =0; i<10; i++)
    {
        int a = arr1[i];
        int b = arr2[i];
        if(a > b)
        {
            sum1 += 3;
        }
        else if(a==b)
        {
            sum1 += 1;
            sum2 += 1;
        }
        else
        {
            sum2 += 3;
        }
    }

    if(sum1 > sum2)
    {
        cout << sum1 << " " << sum2 << "\n";
        cout << "A";
    }
    else if(sum1 < sum2)
    {
        cout << sum1 << " " << sum2 << "\n";
        cout << "B";
    }
    else
    {
        cout << sum1 << " " << sum2 << "\n";

        int cnt = 0;
        int flag = false;
        for(int i =0; i<10; i++)
        {
            if(arr1[i] == arr2[i])
            {
                cnt++;
            }
            if(arr1[i] > arr2[i])
            {
                flag = false;
            }
            else if(arr1[i] < arr2[i])
            {
                flag = true;
            }
        }

        if(cnt == 10)
        {
            cout << "D";
        }
        else
        {
            if(flag == false)
            {
                cout << "A";
            }
            else
            {
                cout << "B";
            }
            
        }
        
        
    }
    
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<functional>

using namespace std;

int main()
{
    int a,b,c,d;
    vector<int>v;
    cin >> a >> b>> c>> d;
    vector<int>origin;
    origin.push_back(a);
    origin.push_back(b);
    origin.push_back(c);
    origin.push_back(d);

    sort(origin.begin(), origin.end(), greater<int>());
    
    if(origin[0]-origin[1] ==0)
    {
        v.push_back(origin[0]/2);
    }
    else
    {
        v.push_back(abs(origin[0] - origin[1]));  
    }
    
    if(origin[0]-origin[2]== 0)
    {
        v.push_back(origin[0]/2);
    }
    else
    {
        v.push_back(abs(origin[0] - origin[2]));
    }
    
    if(origin[0]-origin[3] == 0)
    {
        v.push_back(origin[0]/2);
    }
    else
    {
        v.push_back(abs(origin[0]-origin[3]));
    }
    


    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

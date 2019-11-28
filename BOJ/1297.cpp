#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>


using namespace std;

int main()
{
    int c;
    int h, w;


    cin >> c >> h >> w;

    double ratio = sqrt((double)h*h + double(w*w));

    cout << (int)(c*h / ratio) << " " << (int)(c*w /ratio); 

}

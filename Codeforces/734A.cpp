    #include<iostream>
    #include<cstdio>

    using namespace std;

    int main()
    {
        int n;
        cin >> n;

        int Acnt = 0;
        int Dcnt = 0;
        for(int  i =0; i<n; i++)
        {
            char temp;
            cin >> temp;

            if(temp == 'A')
            {
                Acnt++;
            }
            else
            {
                Dcnt++;
            }
        }
        if(Acnt > Dcnt)
        {
            cout << "Anton";
        }
        else if(Acnt < Dcnt)
        {
            cout << "Danik";
        }
        else
        {
            cout << "Friendship";
        }
        
    }

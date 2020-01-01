#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>node_list;
int idx = 0;

int Pow(int a, int n)
{
    if(n==0) return 1;
    return a*Pow(a, n-1);
}

struct Tree
{
    int node;
    Tree *left;
    Tree *right;
};

Tree NODE[1500];


void go(Tree *node)
{
    if(node != NULL)
    {
        go(node->left);
        node->node = node_list[idx];
        idx++;
        go(node->right);
    }
}

int main()
{
    int k;
    cin >> k;

    int totalNode = Pow(2, k) -1;

    node_list.resize(totalNode);

    for(int i =0; i<totalNode; i++)
    {
        cin >> node_list[i];
    }

    


    for(int i = 0; i<totalNode; i++)
    {
        
        NODE[i].node = 0;
    }

    for(int i =0; i<totalNode; i++)
    {
        if((i+1)*2-1 >= totalNode)continue;
        NODE[i].left = &NODE[(i+1)*2 - 1];
        NODE[i].right = &NODE[(i+1)*2];

    }

    go(NODE);

    int level = 0;
    int idx = 2;
    int cnt = 0;
    cout << NODE[0].node << "\n";

    for(int i =1; i<totalNode; i++)
    {

        if(cnt < idx)
        {
            cout << NODE[i].node << " ";
            cnt++;
        }
        else
        {
            cout << "\n";
            cout << NODE[i].node << " ";
            cnt = 1;
            idx*=2;
        }
        

    }

    
}

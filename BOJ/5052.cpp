#include<iostream>
#include<algorithm>
#include<vector>
#include<memory.h>
#include<string>

using namespace std;

const int strNum = 10;

int toNum(char key)
{
    return key -'0';
}

struct TrieNode
{
    bool terminal;
    TrieNode* children[10];

    TrieNode():terminal(false)
    {
        memset(children, 0, sizeof(children));
    }
    ~TrieNode()
    {
        for(int i = 0; i<strNum; i++)
        {
            if(children[i]) delete children[i];
        }
    }

    void insert(const char*key)
    {
        if(*key == 0)
        {
            terminal = true;
        }
        else
        {
            int next = toNum(*key);
            if(children[next] == NULL) children[next] = new TrieNode();
            children[next]->insert(key+1);
        }
    }
    TrieNode* find(const char* key)
    {
        if(*key == 0) return this;
        int next = toNum(*key);
        if(children[next]==NULL) return NULL;
        return children[next]->find(key+1);
    }

    bool type(const char* key)
    {
        if(*key == 0) return true;
        if(terminal == true) return false;
        int next = toNum(*key);
        if(children[next] == NULL) return true;
        bool res = children[next]->type(key+1);

        return res;
    }
};

bool readInput(int words)
{
    bool res = false;
    TrieNode* trie = new TrieNode();

    vector<string>input;
    for(int i = 0; i<words; i++)
    {
        char buf[11];
        scanf("%s", buf);
        input.push_back(buf);
    }
    sort(input.begin(), input.end());

    for(int i =0; i<input.size(); i++)
    {
        res = trie->type(input[i].c_str());
        if(res == true)
        {
            trie->insert(input[i].c_str());
            continue;
        }
        else break;
    }

    return res;
}


int main()
{
    int c;
    cin >> c;

    for(int t = 0; t<c; t++)
    {
        int n;
        cin >> n;
        bool ans = readInput(n);

        if(ans == false)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
        
        
    }
}

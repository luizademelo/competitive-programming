#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    Node()
    {
        this->value = 0;
        this->left = nullptr;
        this->right = nullptr;
    }

    Node(int v)
    {
        this->value = v;
        this->left = nullptr;
        this->right = nullptr;
    }

    void add(int v)
    {
        if (v < this->value)
        {
            if (this->left == nullptr)
            {
                this->left = new Node(v);
            }
            else
            {
                this->left->add(v);
            }
        }
        else
        {
            if (this->right == nullptr)
            {
                this->right = new Node(v);
            }
            else
            {
                this->right->add(v);
            }
        }
    }

    int value;
    Node *left;
    Node *right;
};

vector<int> maxAtLevels(1000, 1000);

void traverse(Node *node, int level)
{
    if (node == nullptr)
        return;

    maxAtLevels[level] = min(maxAtLevels[level], node->value);
    traverse(node->left, level + 1);
    traverse(node->right, level + 1);
}

int main()
{

    int n;
    cin >> n;
    Node *root = nullptr;

    while (n--)
    {
        int h;
        cin >> h;
        if (root == nullptr)
        {
            root = new Node(h);
            // cout << "cheguei";
        }
        else
        {
            root->add(h);
        }
    }

    traverse(root, 0);

    int i = 0;
    while (maxAtLevels[i] < 1000)
    {
        cout << i << " " << maxAtLevels[i] << endl;

        i++;
    }

    return 0;
}

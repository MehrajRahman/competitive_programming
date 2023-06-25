#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head)
{
    Node *tmp = head;
    int c = 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
}
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (size(head) == 0)
    {

        head = newNode;
        tail = newNode;
    }

    else
    {
        Node *tmp = head;
        tmp->prev = newNode;
        newNode->next = tmp;
        head = newNode;
    }
}

void insert_at_tail(Node *&tail, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = tail;
    tmp->next = newNode;
    newNode->prev = tmp;
    tail = newNode;
}

void print_left(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_right(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void insert_at_any_position(Node *&head, Node *&tail, int p, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    // int c = 1;
    // cout << p << " " << size(head) << endl;

    if (p == size(head))
    {
        insert_at_tail(tail, v);
    }
    else
    {
        for (int i = 1; i < p; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int p, v;
        cin >> p >> v;
        if (p > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (p == 0)
            {
                insert_at_head(head, tail, v);
            }
            else
                insert_at_any_position(head, tail, p, v);

            cout << "L -> ";
            print_left(head);
            cout << endl;

            cout << "R -> ";
            print_right(tail);
            cout << endl;
        }
    }
}
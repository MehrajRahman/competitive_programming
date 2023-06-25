#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    head = newNode;
    tail = newNode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *temp = tail;
    temp->next = newNode;
    tail = newNode;
}

void sort_linked(Node *head)
{
    Node *i;
    Node *j;
    for (i = head; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
                swap(i->val, j->val);
        }
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void make_unique(Node *head)
{
    Node *temp;
    for (temp = head; temp->next != NULL;)
    {
        if (temp->val == temp->next->val)
        {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;

            delete deleteNode;
        }
        else
        {
            temp = temp->next;
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int c = 0;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        if (c == 0)
        {
            insert_at_head(head, tail, v);
        }
        else
        {
            insert_at_tail(tail, v);
        }
        // cin >> v;
        c++;
    }

    sort_linked(head);
    make_unique(head);
    print_linked_list(head);
    cout << endl;
}
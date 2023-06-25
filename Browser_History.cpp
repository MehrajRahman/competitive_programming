#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->name = val;
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
void insert_at_head(Node *&head, Node *&tail, string v)
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

void insert_at_tail(Node *&tail, string v)
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
        cout << temp->name << " ";
        temp = temp->next;
    }
}

int visit(Node *head, Node *&curr, string q)
{
    Node *tmp = head;
    int c = -1;
    while (tmp != NULL)
    {
        if (tmp->name == q)
        {
            c = 1;
            curr = tmp;
            break;
        }
        tmp = tmp->next;
    }

    return c;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string a;
        cin >> a;
        if (a == "end")
        {
            break;
        }
        else
        {
            if (size(head) == 0)
            {
                insert_at_head(head, tail, a);
            }
            else
            {
                insert_at_tail(tail, a);
            }
        }
    }
    int t;
    cin >> t;
    Node *curr = NULL;
    while (t--)
    {
        string a;
        cin >> a;
        if (a == "visit")
        {
            string q;
            cin >> q;
            int c = visit(head, curr, q);
            if (c == -1)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << curr->name << endl;
            }
        }
        else if (a == "next")
        {
            if (curr->next != NULL)
            {
                curr = curr->next;
                cout << curr->name << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (a == "prev")
        {
            if (curr->prev != NULL)
            {
                curr = curr->prev;
                cout << curr->name << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}
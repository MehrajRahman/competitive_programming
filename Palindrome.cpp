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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void make_a_copy(Node *head, Node *tail, Node *&newHead, Node *&newTail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp == head)
        {
            Node *newNode = new Node(temp->val);
            newHead = newNode;
            newTail = newNode;
        }
        else
        {
            Node *newNode = new Node(temp->val);
            newTail->next = newNode;
            newTail = newNode;
        }
        temp = temp->next;
    }
}

void reverse(Node *&head, Node *curr)
{
    Node *temp = curr;
    if (temp->next == NULL)
    {
        head = temp;
        // tail = temp;
        return;
    }

    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}

bool checkPalindrome(Node *head, Node *newHead)
{
    bool f = true;
    Node *temp = head;
    Node *temp2 = newHead;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            f = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    return f;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *newHead = NULL;
    Node *newTail = NULL;
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
    make_a_copy(head, tail, newHead, newTail);

    reverse(newHead, newHead);

    bool cc = checkPalindrome(head, newHead);
    if (cc == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// int size(Node *head)
// {
//     Node *tmp = head;
//     int c = 0;
//     while (tmp != NULL)
//     {
//         c++;
//         tmp = tmp->next;
//     }
//     return c;
// }
// void insertAtHead(Node *&head, Node *&tail, int v)
// {
//     Node *newNode = new Node(v);
//     if (size(head) == 0)
//     {
//         head = newNode;
//         tail = newNode;
//     }

//     else
//     {
//         Node *tmp = head;
//         tmp->prev = newNode;
//         newNode->next = tmp;
//         head = newNode;
//     }
// }

// void insert_at_tail(Node *&tail, int v)
// {
//     Node *newNode = new Node(v);

//     Node *tmp = tail;
//     tmp->next = newNode;
//     newNode->prev = tmp;
//     tail = newNode;
// }

// void print_left(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

// void print_right(Node *tail)
// {
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->prev;
//     }
// }

// void insert_at_any_position(Node *&head, Node *&tail, int p, int v)
// {
//     Node *newNode = new Node(v);
//     Node *tmp = head;
//     // int c = 1;
//     // cout << p << " " << size(head) << endl;

//     if (p == size(head))
//     {
//         insert_at_tail(tail, v);
//     }
//     else
//     {
//         for (int i = 1; i < p; i++)
//         {
//             tmp = tmp->next;
//         }
//         newNode->next = tmp->next;
//         newNode->prev = tmp;
//         tmp->next->prev = newNode;
//         tmp->next = newNode;
//     }
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int p, v;
//         cin >> p >> v;
//         if (p > size(head))
//         {
//             cout << "Invalid" << endl;
//         }
//         else
//         {
//             if (p == 0)
//             {
//                 insertAtHead(head, tail, v);
//             }
//             else
//                 insert_at_any_position(head, tail, p, v);

//             cout << "L -> ";
//             print_left(head);
//             cout << endl;

//             cout << "R -> ";
//             print_right(tail);
//             cout << endl;
//         }
//     }

// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     string name;
//     Node *next;
//     Node *prev;
//     Node(string val)
//     {
//         this->name = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// int size(Node *head)
// {
//     Node *tmp = head;
//     int c = 0;
//     while (tmp != NULL)
//     {
//         c++;
//         tmp = tmp->next;
//     }
//     return c;
// }
// void insertAtHead(Node *&head, Node *&tail, string v)
// {
//     Node *newNode = new Node(v);
//     if (size(head) == 0)
//     {

//         head = newNode;
//         tail = newNode;
//     }

//     else
//     {
//         Node *tmp = head;
//         tmp->prev = newNode;
//         newNode->next = tmp;
//         head = newNode;
//     }
// }

// void insert_at_tail(Node *&tail, string v)
// {
//     Node *newNode = new Node(v);

//     Node *tmp = tail;
//     tmp->next = newNode;
//     newNode->prev = tmp;
//     tail = newNode;
// }

// void print_left(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->name << " ";
//         temp = temp->next;
//     }
// }

// int visit(Node *head, Node *&curr, string q)
// {
//     Node *tmp = head;
//     int c = -1;
//     while (tmp != NULL)
//     {
//         if (tmp->name == q)
//         {
//             c = 1;
//             curr = tmp;
//             break;
//         }
//         tmp = tmp->next;
//     }

//     return c;
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     while (true)
//     {
//         string a;
//         cin >> a;
//         if (a == "end")
//         {
//             break;
//         }
//         else
//         {
//             if (size(head) == 0)
//             {
//                 insertAtHead(head, tail, a);
//             }
//             else
//             {
//                 insert_at_tail(tail, a);
//             }
//         }
//     }
//     int t;
//     cin >> t;
//     Node *curr = NULL;
//     while (t--)
//     {
//         string a;
//         cin >> a;
//         if (a == "visit")
//         {
//             string q;
//             cin >> q;
//             int c = visit(head, curr, q);
//             if (c == -1)
//             {
//                 cout << "Not Available" << endl;
//             }
//             else
//             {
//                 cout << curr->name << endl;
//             }
//         }
//         else if (a == "next")
//         {
//             if (curr->next != NULL)
//             {
//                 curr = curr->next;
//                 cout << curr->name << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (a == "prev")
//         {
//             if (curr->prev != NULL)
//             {
//                 curr = curr->prev;
//                 cout << curr->name << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//     }
// }

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
void printNormal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printReverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insertAtHead(Node *&head, Node *&tail, int v)
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

void insertAnypos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (pos == size(head))
    {
        Node *tmp = tail;
        tmp->next = newNode;
        newNode->prev = tmp;
        tail = newNode;
    }
    else
    {
        for (int i = 1; i < pos; i++)
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
                insertAtHead(head, tail, v);
            }
            else
                insertAnypos(head, tail, p, v);

            cout << "L -> ";
            printNormal(head);
            // cout << endl;

            cout << "R -> ";
            printReverse(tail);
            // cout << endl;
        }
    }

    return 0;
}

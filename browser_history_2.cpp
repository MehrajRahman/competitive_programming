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
// void insertInHead(Node *&head, Node *&tail, string v)
// {
//     Node *newNode = new Node(v);
//     if (size(head) == 0)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     // else
//     // {
//     //     Node *tmp = head;
//     //     tmp->prev = newNode;
//     //     newNode->next = tmp;
//     //     head = newNode;
//     // }
// }

// void insertAtTail(Node *&tail, string v)
// {
//     Node *newNode = new Node(v);

//     Node *tmp = tail;
//     tmp->next = newNode;
//     newNode->prev = tmp;
//     tail = newNode;
// }

// int currentVisit(Node *head, Node *&curr, string q)
// {
//     Node *tmp = head;
//     int status = -1;
//     while (tmp != NULL)
//     {
//         if (tmp->name == q)
//         {
//             status = 1;
//             curr = tmp;
//             break;
//         }
//         tmp = tmp->next;
//     }

//     return status;
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     string web;
//     while (true)
//     {
//         cin >> web;
//         if (web == "end")
//         {
//             break;
//         }
//         else
//         {
//             if (size(head) == 0)
//             {
//                 insertInHead(head, tail, web);
//             }
//             else
//             {
//                 insertAtTail(tail, web);
//             }
//         }
//     }

//     int time;
//     cin >> time;
//     Node *curr = NULL;

//     while (time--)
//     {
//         string a;
//         cin >> a;
//         if (a == "visit")
//         {
//             string q;
//             cin >> q;
//             int c = currentVisit(head, curr, q);
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
    string web;
    Node *nextSite;
    Node *prevSite;
    Node(string web)
    {
        this->web = web;
        this->nextSite = NULL;
        this->prevSite = NULL;
    }
};

void insertAtTail(Node *&tail, string q)
{
    Node *newNode = new Node(q);
    Node *tmp = tail;
    tmp->nextSite = newNode;
    newNode->prevSite = tmp;
    tail = newNode;
}

int currentVisit(Node *head, Node *&curr, string q)
{
    Node *tmp = head;
    int status = -1;
    while (tmp != NULL)
    {
        if (tmp->web == q)
        {
            status = 1;
            curr = tmp;
            break;
        }
        tmp = tmp->nextSite;
    }

    return status;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *curr = NULL;

    while (true)
    {
        string inp;
        cin >> inp;
        if (inp == "end")
        {
            break;
        }
        else
        {
            if ((head == NULL))
            {
                Node *newNode = new Node(inp);
                head = newNode;
                tail = newNode;
            }
            else
            {
                insertAtTail(tail, inp);
            }
        }
    }

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string current;
        cin >> current;
        if (current == "visit")
        {
            string query;
            cin >> query;
            int c = currentVisit(head, curr, query);
            if (c == -1)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << curr->web << endl;
            }
        }
        else if (current == "next")
        {
            if (curr->nextSite != NULL)
            {
                curr = curr->nextSite;
                cout << curr->web << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (current == "prev")
        {
            if (curr->prevSite != NULL)
            {
                curr = curr->prevSite;
                cout << curr->web << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}
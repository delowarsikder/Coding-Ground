#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node Node;
#define endl '\n'

struct node
{
    int item;   // that will store in linked list
    Node *next; // next-> store the next node address
    // head->initial address of linked list
    //  temp->use as a intermidate address storage
    Node *head = NULL, *temp;
    // create a new node , then return the head of linked list
    Node *create_node(int item, Node *next)
    {
        Node *new_node = (Node *)malloc(sizeof(Node));
        if (new_node == NULL)
        {
            printf("Error: New node can not be created !!\n");
            exit(0);
        }
        new_node->item = item;
        new_node->next = next;
        if (head == NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        return head;
    }
    // remove specific node
    void remove_node(Node *head, int val)
    {
        // head -> intial address of linked list
        //  item -> which node / item will delete
        Node *search_node = NULL;
        Node *start = head, *previousNode = NULL;
        while (1)
        {
            if (start->item == val)
            {
                search_node = start;
                break;
            }
            if (start->next == NULL)
            {
                break;
            }
            start = start->next;
        }
        if (search_node == NULL)
        {
            printf("This item doesn't exists!");
            // return NULL;
        }
        else if (search_node == head)
        {
            cout << "first node deleted" << endl;
            head = head->next;
            free(search_node);
            // return head;
        }
        else if (search_node->next == NULL)
        {
            cout << "last node deleted" << endl;
        }
    }

    // print linked list-->>
    void printNode()
    {
        Node *srt = head;
        while (1)
        {
            cout << srt->item << endl;
            if (srt->next == NULL)
            {
                break;
            }
            srt = srt->next;
        }
    }
};

int main()
{
    Node *n;
    Node ptr;
    // insert into linked list
    for (int i = 2; i < 6; i++)
    {
        ptr.create_node(i, NULL);
    }
    cout << "print created list :" << endl;
    ptr.printNode();
    int remove_item;
    cout << "Enter Delete item: " << endl;
    cin >> remove_item;
    ptr.remove_node(ptr.head, remove_item);
    // cout << "List after deleted " << endl;
    //    ptr.printNode();

    return 0;
}

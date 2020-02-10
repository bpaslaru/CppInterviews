#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void printList(Node* n) {
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }

    cout << endl;
}

void push(Node** head_ref, int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void push_back(Node* n, int data) {
    while(n->next != NULL)
    {
        n = n->next;
    }

    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    n->next = new_node;
}

void insertNode(Node** head_ref, int data, int position) {

    if(position == 0)
    {
        push(head_ref, data);

    }
    else
    {
        Node* n = *head_ref;
        position--;

        while(n != NULL && position > 0)
        {
            n = n->next;
            position--;
        }

        if(position == 0)
        {
            Node* new_node = new Node();
            new_node->data = data;
            new_node->next = n->next;
            n->next = new_node;
        }
        else
        {
            cout << "Position out of order" << endl;
        }
    }
}

void deleteNode(Node** head_ref, int position) {
    Node *n = *head_ref, *prev;

    if(position == 0)
    {
        *head_ref = n->next;
        free(n);
    }
    else
    {
        position --;
        while(n != NULL && position > 0)
        {
            prev = n;
            n = n->next;
            position--;
        }

        if(position == 0)
        {
            prev->next = n->next;
            free(n);
        }
        else
        {
            cout << "Position out of order" << endl;
        }
    }
}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head-> next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    push(&head,0);
    printList(head);
    push_back(head, 4);
    printList(head);
    insertNode(&head, 5, 1);
    printList(head);
    deleteNode(&head, 0);
    printList(head);

    return 0;
}


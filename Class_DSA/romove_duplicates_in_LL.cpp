#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void swap(Node*&h1, Node*&h2){
    int temp = h1->data;
    h1->data = h2->data;
    h2->data = temp;
}

void sortLL(Node*&head){  //applying bubble sort on linked list
    if(head==NULL){
        return;
    }
    int swapped;
    Node*temp;
    Node*sorting = NULL;
    do{
        temp = head;
        swapped = 0;
    
    while(temp->next!=NULL){
        if(temp->data>temp->next->data){
            swap(temp,temp->next);
            swapped=1;
        }
        temp=temp->next;
    }
    sorting = temp;
    }
    while(swapped);
    
}

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *currHead = head;
    while (currHead->next != NULL)
    {
        if (currHead->data == currHead->next->data)
        {
            currHead->next = currHead->next->next;
        }
        else
        {
            currHead = currHead->next;
        }
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        sortLL(head);
        print(head);
        head = removeDuplicates(head);
        print(head);
    }
    return 0;
}
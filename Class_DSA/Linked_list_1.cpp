#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class ll
{
public:
    node *head;

    ll()
    {
        head = NULL;
    }

    void insert_at_the_beginning(int data)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }

    void insert_at_the_end(int data){
        node *temp = head;
        while(temp->next != NULL){
            temp = temp -> next;
        }
        node *ptr = new node(data);
        temp -> next = ptr;
    }

    void search(int data)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                cout << "found" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not found" << endl;
    }

    void traverse()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void remove_at_beginning()
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }
};

int main()
{
    int op;
    cout << "Enter number of operations" << endl;
    cin >> op;
    cout << "1: insert_at_the_beginning, 2: insert_at_the_end, 3:traverse, 4:delete, 5:search" << endl;
    ll our_list;

    while (op--)
    {
        cout << "Enter operation" << endl;
        int curr;
        cin >> curr;

        switch (curr)
        {
        case 1:
            cout << "Enter the element" << endl;
            int elem;
            cin >> elem;
            our_list.insert_at_the_beginning(elem);
            break;

        case 2:
            cout << "Enter the element" << endl;
            int item;
            cin >> item;
            our_list.search(item);
            break;

        case 3:

            our_list.traverse();
            break;

        case 4:
            our_list.remove_at_beginning();

        case 5:
            cout << "Enter the element" << endl;
            int element;
            cin >> element;
            our_list.insert_at_the_end(element);
            break;
        }
    }
}
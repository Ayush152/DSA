#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        this -> data = val;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

class doubly_ll
{
public:
    node *head;
    node *tail;

    doubly_ll()
    {
        head = NULL;
        tail = NULL;
    }

    void insert_at_beginning(int val)
    {
        if (head == NULL)
        {
            head = new node(val);
            tail = head;
            return;
        }
        node *ptr = new node(val);
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }

    void insert_at_end(int val)
    {
        if (tail == NULL)
        {
            head = new node(val);
            tail = head;
            return;
        }
        node *ptr = new node(val);
        tail->next = ptr;
        ptr->prev = tail;
        tail = ptr;
    }

    void insert_at_any_position(int element, int val)
    {
        node *temp = head;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Position not found";
        }
        if (temp->next == NULL)
        {
            insert_at_end(val);
            return;
        }
        node *newnode = new node(val);
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }

    void search(int val)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                cout << "Found" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not Found" << endl;
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

    void delete_at_begin()
    {
        if (head == NULL)
        {
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            tail = NULL;
            head = NULL;
            return;
        }
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }

    void delete_at_end()
    {
        if (tail == NULL)
        {
            return;
        }
        if (tail->prev == NULL)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void delete_after_given(int val)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                break;
            }
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return;
        }
        if (temp->next == NULL)
        {
            return;
        }
        if (temp->next->next == NULL)
        {
            delete_at_end();
            return;
        }
        node *ptr = temp->next;
        temp->next = ptr->next;
        ptr->next->prev = temp;
        delete ptr;
    }

    void delete_before_given(int val)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                break;
            }
            temp = temp->next;
        }
        if (temp == NULL || temp == head)
        {
            return;
        }
        if (temp->prev == head)
        {
            delete_at_begin();
            return;
        }
        node *ptr = temp->prev;
        temp->prev = ptr->prev;
        ptr->prev->next = temp;
        delete ptr;
    }
};

int main()
{
    cout << "Enter the number of operations : ";
    int n;
    cin >> n;
    cout << endl;
    cout << "1:insert_at_beginning\n2:insert_at_end\n3:insert_at_any_position\n4:search\n5:traverse\n6:delete_at_begin\n7:delete_at_end\n8:delete_after_given\n9:delete_before_given\n" << endl;
    doubly_ll li;

    while (n--)
    {
        cout << "Enter the operation : ";
        int x;
        cin >> x;

        switch (x)
        {
        case 1:
            int val;
            cout << "Enter the value : ";
            cin >> val;
            li.insert_at_beginning(val);
            break;

        case 2:
            int val2;
            cout << "Enter the value : ";
            cin >> val2;
            li.insert_at_end(val2);
            break;

        case 3:
            int val3;
            cout << "Enter the value : ";
            cin >> val3;
            cout << "Enter the elememt after which you want to insert data : ";
            int element;
            cin >> element;
            li.insert_at_any_position(element, val3);
            break;

        case 4:
            cout << "Enter the element : ";
            int val4;
            cin >> val4;
            li.search(val4);
            break;

        case 5:
            li.traverse();
            break;

        case 6:
            li.delete_at_begin();
            break;

        case 7:
            li.delete_at_end();
            break;

        case 8:
            cout << "Enter the element : ";
            int n;
            cin >> n;
            li.delete_after_given(n);
            break;

        case 9:
            cout << "Enter the element : ";
            int m;
            cin >> m;
            li.delete_before_given(m);
            break;
        }
    }
}
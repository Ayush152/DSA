#include <iostream>
using namespace std;

struct node
{
    char data;
    node *next;
    node()
    {
        next = NULL;
    }
} 
*head = NULL;


void insert_at_the_beginning()
{
    char value;
    struct node *temp;
    temp = new node;
    cout << "Enter character: ";
    cin >> value;
    temp->data = value;
    if (head == NULL)
        temp->next = NULL;
    else
        temp->next = head;
    head = temp;
}

void display()
{
    node *temp = head;
    
        while (temp != NULL)
        {
            char data = temp->data;
            if (data == 'F')
            {
                temp = temp->next;
                continue;
            }
            cout << data << " ";
            temp = temp->next;
        }
        cout << "\n";
    
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    while (n--)
        insert_at_the_beginning();

    cout << "Linked list elements not containing F: \n";
    display();
}
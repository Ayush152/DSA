#include <iostream>

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

// Node * insertNodeRec (Node* head, int i, int data){

//     Node *temp = head;

//     if (head == NULL){
//         return head;
//     }
//     else if(i == 0){
//         Node *newNode = new Node(data);
//         newNode -> next = temp;
//         // temp = newNode;
//         head -> next = newNode;
//         return head;
//     }

//     else {
//         Node *ptr = insertNodeRec(head -> next, i-1, data);
//         head -> next = ptr;
//     }
//     return head;

// }


Node* insertNodeRec(Node *head, int i, int data) {
    if(head==NULL)
    {
        if(i==0)
        {
            Node *newnode=new Node(data);
            return newnode;
        }
        return head;
    }
    Node *newnode=new Node(data);
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    head->next=insertNodeRec(head->next,i-1,data);
    return head;
}

Node* deleteNodeRec(Node *head, int i){
    if (head == NULL){
        return head;
    }

    if (i == 0){
        Node *ptr = head;
        head = head -> next;
        delete ptr;
        return head;
    }
    Node* smallHead = deleteNodeRec(head -> next, i-1);
    head -> next = smallHead;
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        // int pos, data;
        // cin >> pos >> data;
        // head = insertNodeRec(head, pos, data);

        int i;
        cin >> i;
        head = deleteNodeRec (head , i);
        print(head);
    }
}
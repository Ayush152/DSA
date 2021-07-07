#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* takeInput(){
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1){
        Node *newNode = new Node(data);
        if (head == NULL){
            head = newNode;
            tail = newNode;

        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }

        cin >> data;
    }
    return head;
}

Node* insertNode (Node *head, int i, int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if (i == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    while(temp != NULL && count < i-1){
        temp = temp -> next;
        count ++;
    }
    // Node *ptr = temp -> next;
    // temp -> next = newNode;
    // newNode -> next = ptr;

    if(temp != NULL){
        newNode ->next = temp -> next;
        temp -> next = newNode;
    }
    return head;
}

Node* deleteNode (Node *head, int i){
    int count = 0;
    Node *temp = head;

    if (i == 0){
        // Node *ptr = head;
        head = head -> next;
        // delete ptr;
        return head;
    }

    while (temp != NULL && count < i-1){
        temp = temp -> next;
        count ++;
    }

    if (temp != NULL){
        // temp -> next = temp -> next -> next;
        Node *ptr = temp -> next;
        if (ptr == NULL){
            temp = NULL;
        }
        else{
            temp -> next = ptr -> next;
        }
        delete ptr;
    }
    return head;
}

void print (Node *head){
    Node *temp = head;

    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

    Node *head = takeInput();
    print (head);

    int i;
    cin >> i;

    head = deleteNode (head, i);
    print (head);
    // Node n1(1);
    // Node *head = &n1;

    // Node n2(2);

    // Node n3(3);
    // Node n4(4);
    // Node n5(5);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    // print (head);

}

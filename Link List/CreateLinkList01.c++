#include<bits/stdc++.h>
using namespace std;

// node create
class Node
{
    public:
    int data;
    Node *next;

    Node(){
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void printLL(Node* head){
        Node* temp = head;

        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
            if(temp == NULL){
                cout<<"NULL";
            }
        }
        
    }

// Find length Link List
void findLengthLL(Node* head){
    Node* temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout<<"Link List Length: "<<count;
    
}

void createTail(Node* &head, Node* &tail){
    Node* temp = head;
    while (temp->next = NULL)
    {
        temp = temp->next;
    }
    // jab ye loop khatm ho gya ho ga to temp khada ho ga last node mai
    tail = temp;
}

void insertNodeAtHead(Node* &head, Node* &tail, int data){

    if(head == NULL){
        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;
    }
    else{
        //1. create node
        Node* newNode = new Node(data);

        //2. attached the newnode to hade node
        newNode->next = head;

        //3. head update 
        head = newNode;
        }
    
}

void insertNodeAtTail(Node* &head, Node* &tail, int data)
{
    if(head == NULL){
        //1. create node
        Node* newNode = new Node(data);

        //2. update hade and tail
        head = newNode;
        tail = newNode;
    }
    else{
        //1. create node
        Node* newNode = new Node(data);
        
        //2. attached node
        tail->next = newNode;

        //3. tail Update
        newNode = tail;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertNodeAtHead(head, tail, 10);
    insertNodeAtHead(head, tail, 20);
    printLL(head);

    cout<<endl;
    insertNodeAtTail(head, tail, 5);
    printLL(head);

    // // Assign the value to the node
    // Node *first = new Node(10);
    // Node *second = new Node(10);
    // Node *third = new Node(10);
    // Node *fourth = new Node(10);
    // Node *fifth = new Node(10);
    
    // // Link the node/ Initilazing the next node
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // findLengthLL(head);

    // insertNodeAtHead(head,tail, 20);
    // insertNodeAtHead(head, tail, 30);
    // insertNodeAtHead(head, tail, 40);
    // insertNodeAtHead(head, tail, 50);
    // printLL(head);

    // cout<<endl;
    // insertNodeAtTail(head, tail, 30);
    // printLL(head);

  return 0;
}

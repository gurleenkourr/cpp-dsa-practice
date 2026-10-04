#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //DESTRUCTOR
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
//INSERTION at starting/head
void InsertAtHead(Node* &head,int d){
    //new node create
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
//at ending/tail
void InsertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
//at any position--->starting/ending/middle
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    //Insert at start/head
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    //Insert at any position between start and end
    Node*temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //Insert at end/tail
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    //creating node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

//DELETION
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position ==1){
        Node* temp = head;
        head=head->next;
        //memormy free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
//HOW TO PRINT LINKED LIST
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //Created a new node
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //Head pointed to node1
    Node* head=node1;
    Node* tail=node1;

    print(head);
    //InsertAtHead(head,12);
    InsertAtTail(tail,12);
    print(head);
    //InsertAtHead(head,18);
    InsertAtTail(tail,18);
    print(head);

    InsertAtPosition(tail,head,3,22);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    deleteNode(2,head);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
}
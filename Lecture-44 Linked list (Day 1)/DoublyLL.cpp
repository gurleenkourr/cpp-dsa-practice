#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //CONSTRUCTOR
    Node(int d){
        this->data=d;
        this->prev=NULL;
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
//traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of linked list
int getlength(Node* head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
    cout<<endl;
}

//INSERTION
//Insert at starting/Head
void InsertAtHead(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
//Insert at last/Tail
void InsertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;

    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }

}
//Insert at any position
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    //Insert at start/head
    if(position==1){
        InsertAtHead(tail,head,d);
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
        InsertAtTail(tail,head,d);
        return;
    }

    //creating node for d
    Node* nodeToInsert=new Node(d);     //1 
    nodeToInsert->next=temp->next;      //2
    temp->next->prev=nodeToInsert;      //3 
    temp->next=nodeToInsert;            //4
    nodeToInsert->prev=temp;            //5

}

//DELETION
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position ==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=temp->next;
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
        curr->prev=NULL;
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    //Node* node1=new Node(5);
    Node*head=NULL;
    Node*tail=NULL;
    print(head);

    cout<<"Length: "<<getlength(head)<<endl;

    InsertAtHead(tail,head,7);
    print(head);

    InsertAtHead(tail,head,9);
    print(head);

    InsertAtHead(tail,head,10);
    print(head);

    InsertAtTail(tail,head,25);
    print(head);

    InsertAtPosition(tail,head,4,2);
    print(head);

    InsertAtPosition(tail,head,6,2);
    print(head);

    InsertAtPosition(tail,head,1,2);
    print(head);

    deleteNode(1,head);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    deleteNode(6,head);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    
    deleteNode(3,head);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

}
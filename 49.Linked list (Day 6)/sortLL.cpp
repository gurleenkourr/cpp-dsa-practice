/*
void insertAtTail(Node*&tail,Node*curr){
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node *head){
    //APPROACH 2
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node* onehead=new Node(-1);
    Node* onetail=onehead;
    Node* twohead=new Node(-1);
    Node* twotail=twohead;

    Node* curr=head;

    //Create a separated linked list
    while(curr!=NULL){
        int value =curr->data;
        if(value==0){
            insertAtTail(zerotail,curr);
        }
        else if(value==1){
            insertAtTail(onetail,curr);
        }
        else if(value==2){
            insertAtTail(twotail,curr);
        }
        curr=curr->next;
    }

    //Merge 3 sublist
    /*1 is non empty*/
 /*
    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
    }
    //1 is empty
    else{
        zerotail->next=twohead->next;
    }

    onetail->next=twohead->next;
    twotail->next=NULL;

    //set head
    head=zerohead->next;

    //delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
    */
  
    /*
    APPROACH 1

    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;

    Node*temp=head;

    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }
        if(temp->data==1){
            oneCount++;
        }
        if(temp->data==2){
            twoCount++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;
    
}*/

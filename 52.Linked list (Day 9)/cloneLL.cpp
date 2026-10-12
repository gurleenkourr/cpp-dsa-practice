/*
class Solution {
  private:
  void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* temp = new Node(d);
         //empty list
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
  public:
    Node* cloneLinkedList(Node* head) {
        // T.C-->O(N)  and  S.C-->O(1)
        
        //step 1 : create a clone list
        Node*CloneHead=NULL;
        Node*CloneTail=NULL;
        
        Node*temp=head;
        
        while(temp!=NULL){
            insertAtTail(CloneHead,CloneTail,temp->data);
            temp=temp->next;
        }
        // step 2 : Add clonenode in between original list
          
        Node*OriginalNode=head;
        Node*CloneNode=CloneHead;
        
        while(OriginalNode!=NULL && CloneNode!=NULL){
            Node*next = OriginalNode->next;
            OriginalNode->next=CloneNode;
            OriginalNode=next;
            
            next=CloneNode->next;
            CloneNode->next=OriginalNode;
            CloneNode=next;
        }
        
        //step 3 : random pointer copy
        
        temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL){
                temp->next->random=temp->random ? temp->random->next :temp->random;
            }
            temp=temp->next->next;
        }
        
        //step 4 : revert changes done in step 2
        
        OriginalNode=head;
        CloneNode=CloneHead;
        
        while(OriginalNode!=NULL && CloneNode!=NULL){
            OriginalNode->next=CloneNode->next;
            OriginalNode=OriginalNode->next;
            
            if(OriginalNode!=NULL){
                CloneNode->next=OriginalNode->next;
            }
            CloneNode=  CloneNode->next;
        }
        return CloneHead;
        
        <------------------------------------------------------------------------------------------------------>
        T.C , S.C ---> O(N) 
        //step 1 : Create a clone list
        Node*CloneHead=NULL;
        Node*CloneTail=NULL;
        
        Node*temp=head;
        
        while(temp!=NULL){
            insertAtTail(CloneHead,CloneTail,temp->data);
            temp=temp->next;
        }
        
        //step 2 : Create a map
        unordered_map<Node*,Node*> oldToNewNode;
        
        Node*OriginalNode=head;
        Node*CloneNode=CloneHead;
        while(OriginalNode!=NULL){
             oldToNewNode[OriginalNode]=CloneNode;
             OriginalNode=OriginalNode->next;
             CloneNode=CloneNode->next;
        }
        OriginalNode=head;
        CloneNode=CloneHead;
        
        while(OriginalNode!=NULL){
            CloneNode->random=oldToNewNode[OriginalNode->random];
            OriginalNode=OriginalNode->next;
            CloneNode=CloneNode->next;
        }
        return CloneHead;
    }
};
*/
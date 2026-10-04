/*

Node * removeDuplicates(Node *head)
{
    //Empty list
    if(head==NULL){
        return NULL;
    }
    //Non empty list
    Node*curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL) && curr->data==curr->next->data){
            Node*next_next=curr->next->next;
            Node*nodeTodelete=curr->next;
            delete(nodeTodelete);
            curr->next=next_next;
        }
        //not equal
        else{
            curr=curr->next;
        }
    }
    return head;
}
    
*/
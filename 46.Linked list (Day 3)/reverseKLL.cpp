/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
/*
Node* kReverse(Node* head, int k) {
    //Base case
    if(head==NULL){
        return NULL;
    }
    // Step 1: Check whether k nodes are available
    Node* temp = head;
    int count = 0;

    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    // If fewer than k nodes are left, don't reverse them
    if (count < k) {
        return head;
    }

    //Step 2 reverse first k nodes
    Node*next=NULL;
    Node*curr=head;
    Node*prev=NULL;

    count =0;

    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //Step 3 Recursive call
    if(next!=NULL){
        head->next=kReverse(next,k);
    }

    //Step 4 Return head of reverse list
    return  prev;
}
*/
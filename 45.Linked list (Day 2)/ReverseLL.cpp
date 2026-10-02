/*
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
/*
//2nd RECURSIVE SOLUTION
LinkedListNode<int>* reverse1(LinkedListNode<int> *head){
    //Base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* chotahead=reverse1(head->next);

    head->next->next=head;
    head->next=NULL;

    return chotahead;

}
/*
//RECURSIVE SOLUTION
void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* curr,LinkedListNode<int>* prev){
    //Base case
    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode<int>*forward=curr->next;
    //Recursive call
    reverse(head,forward,curr);
    curr->next=prev;
}
*/
/*
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse1(head);
    /*
    //RECURSIVE SOLUTION
    LinkedListNode<int>*prev=NULL;
    LinkedListNode<int>* curr=head;
    reverse(head,curr,prev);
    return head;
    */

    /*
    //ITERATIVE SOLUTION
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>*prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
*/
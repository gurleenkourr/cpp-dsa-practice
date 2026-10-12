/*
class Solution {
  private:
    Node* reverse(Node* head) {

        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct Node* &head, struct Node* &tail, int val) {

        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
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

    Node* add(struct Node* head1, struct Node* head2) {
        int carry = 0;

        Node* ansHead = NULL;
        Node* ansTail = NULL;

        while(head1 != NULL || head2 != NULL || carry != 0) {

            int val1 = 0;
            if(head1 != NULL)
                 val1 = head1 -> data;

            int val2 = 0;
            if(head2 !=NULL)
                 val2 =  head2-> data;


            int sum = carry + val1 + val2;
            int digit = sum%10;

            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);

            carry = sum/10;
            if(head1 != NULL)
                head1 = head1 -> next;

            if(head2 != NULL)
                head2 =  head2 -> next;
        }
        return ansHead;
    }
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        
        //step 1 Reverse input list
        head1=reverse(head1);
        head2=reverse(head2);
        
        //step 2 Add 2 LL
        Node*ans=add(head1,head2);
        
        //step 3 Reverse ans ll
        ans=reverse(ans);
        
        // Step 4: Remove leading zeros
        while (ans != NULL && ans->data == 0 && ans->next != NULL) {
            Node* temp = ans;
            ans = ans->next; 
            delete temp;
        }
        return ans;
    }
};
*/
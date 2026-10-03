/*

Node *removeDuplicates(Node *head)
{
    // Empty list
    if(head == NULL) {
        return NULL;
    }
    // curr points to the node whose duplicates we want to remove
    Node* curr = head;
    while(curr != NULL) {
        Node* temp = curr;
        // Check all nodes after curr
        while(temp->next != NULL) {

            if(curr->data == temp->next->data) {
                // Duplicate node
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            }
            else {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}
*/
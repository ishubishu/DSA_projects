SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* newnode= new SinglyLinkedListNode(data);
    newnode->data=data;
    for(int i=1;i<position;i++){
        temp=temp->next;
        
    }
    SinglyLinkedListNode* prev=temp->next;
    temp->next=newnode;
    newnode->next=prev;
    return llist;

}

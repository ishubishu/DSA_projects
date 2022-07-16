ListNode* Solution::sortList(ListNode* head) {
    ListNode* Node=NULL;
    ListNode* temp=head;
    ListNode* nextptr=head->next;
    while(temp->next!=NULL){
        if(temp->val>nextptr->val){
            Node=temp;
            temp=nextptr;
            temp->next=temp->next->next;
            nextptr->next=Node;
            nextptr=temp->next;
        }else{
             temp=temp->next;
             nextptr=nextptr->next;
    }
    }
    return head;
    
}

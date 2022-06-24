class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* prev=head->next;
        while(prev!=NULL){
            if(temp->val==prev->val){
                prev=prev->next;
            }else{
                
                
                temp->next=prev;
                temp=prev;
                prev=prev->next;
            }
            temp->next=NULL;
            
        }
        return head;
    }
};

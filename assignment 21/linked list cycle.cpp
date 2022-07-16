class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        
        ListNode * fast= head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            while(slow==fast){
                return slow->next;
            }
        }
        return NULL;
    
        
    }
};

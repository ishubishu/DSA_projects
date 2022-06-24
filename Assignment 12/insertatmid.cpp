class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count+=1;
            temp=temp->next;
        }
        int len=count/2;
        temp=head;
        for(int i=0;i<len;i++){
            temp =temp->next;
        }
        return temp;
        
        
    }
};

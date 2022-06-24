 */
class Solution {
public:
    
        
    int getDecimalValue(ListNode* head) {
        int sum=0;
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }        
       temp=head;
        while(temp!=NULL){
            
                sum+=(temp->val)*pow(2,count-1);
                count--;
                temp=temp->next;
            
            
        }
        return sum;
    }
};

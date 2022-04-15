class Solution {
public:
    bool hasCycle(ListNode *head) {
	
		ListNode *slow=head;
        ListNode *fast=head;
        if(head==NULL || head->next==NULL)
        {
            return false;
        }
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
        {
            return true;
        }
        }
        
        return false;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
     ListNode *temp=head;
         ListNode *temp1=head;
        
        int length =0;
        int l=0;
        if(head==NULL || head->next==NULL)
            return head;
        while(temp->next!=NULL)
        {
            
            temp=temp->next;
            
           length++;
        }
        length++;
        if(k >=length) 
        {
            k=k% length;
        }
        temp->next=head;
        
        l=length-k;
        
        while(--l)
        {
            temp1=temp1->next;
            
        }
        head=temp1->next;
        temp1->next=NULL;
        return head;
        
    }
};
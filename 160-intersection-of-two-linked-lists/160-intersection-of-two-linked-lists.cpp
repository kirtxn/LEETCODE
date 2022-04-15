/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        ListNode *temp1=headA;
        
        unordered_set<ListNode*> referenceSet;
        
        while(temp1!=NULL)
        {
            referenceSet.insert(temp1);
            temp1=temp1->next;
        }
        ListNode *temp2=headB;
        while(temp2!=NULL)
        {
            if(referenceSet.find(temp2)!= referenceSet.end())
            {
                return temp2;
            }
            temp2=temp2->next;
        }
        return NULL;
      
        
        
        
    }
};


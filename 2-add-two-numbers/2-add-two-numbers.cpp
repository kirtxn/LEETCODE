class Solution {
public:
    
   
    ListNode* insertAtEnd(ListNode* l, int val){
        ListNode* n = new ListNode(val);
        if(!l) return n;
        ListNode* temp = l;
        while(temp->next) temp = temp->next;
        temp->next = n;
        return l;
    }
    
    
    ListNode* addRemainList(ListNode* l, int* aux, ListNode* l3){
        while(l){
            int sum = l->val + *aux;
            int uni = sum % 10;
            l3 = insertAtEnd(l3, uni);
            *aux = sum / 10;
            l = l->next;
        }
        return l3;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = NULL;
        int aux = 0;    
        
        
        while(l1 && l2){
            int sum = l1->val + l2->val + aux;    
            int uni = sum % 10;       
            l3 = insertAtEnd(l3, uni);      
            aux = sum / 10;      
            l1 = l1->next;
            l2 = l2->next;
        }
        
      
        if(l1){
            l3 = addRemainList(l1, &aux, l3);   
        }else if(l2){
            l3 = addRemainList(l2, &aux, l3);
        }
        
     
        if(aux){
            l3 = insertAtEnd(l3, aux);
        }
        return l3;
    }
};
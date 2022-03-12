/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(not head) 
            return head;
// Modifying the input list:
        Node *temp = head, *ptr = head;
        while(ptr){
            temp = ptr->next;
            ptr->next = new Node(ptr->val);
            ptr->next->next = temp;
            ptr = temp;
        }
// List Updated to: [7]-[copy7]->[13]->[copy13]... 

//  Updating the random pointers
	ptr = head;
    while(ptr){
            ptr->next->random = (ptr->random)? ptr->random->next : nullptr;
            ptr = ptr->next->next;
        }
//  Disconnecting to generate cloned list.
        Node *copyHead = head->next, *copyptr = head->next;
        while(head){
            head->next = head->next->next;
            copyptr->next = copyptr->next? copyptr->next->next : nullptr;
            head = head->next;
            copyptr = copyptr->next;
        }   
     return copyHead; 
    }
};
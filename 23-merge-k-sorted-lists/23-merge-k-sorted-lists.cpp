class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;  //If no lists are given return 'nullptr'.
        vector<int> vec;  //Step 1
        for(auto &list: lists) {
            while(list != nullptr) {
                vec.push_back(list->val);
                list=list->next;
            }
        }
        if(vec.size()==0) return nullptr;  //If no elements are present in the given lists return 'nullptr'
        sort(vec.begin(), vec.end());  //Step 2
        ListNode *head = new ListNode();  //Step 3
        ListNode *temp = head;
        for(int i=0; i<vec.size()-1; i++) {
            temp->val = vec[i];
            temp->next = new ListNode(); 
            temp = temp->next;
        }
        temp->val = vec[vec.size()-1];
        return head;
    }
};
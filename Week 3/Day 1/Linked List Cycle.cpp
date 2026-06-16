class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        set<ListNode*>s;
        while(temp!=NULL){
            if(s.count(temp)==0){
                s.insert(temp);
                temp=temp->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

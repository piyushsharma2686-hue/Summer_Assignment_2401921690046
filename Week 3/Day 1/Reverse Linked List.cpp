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
    ListNode* reverseList(ListNode* head) {
        vector<int>copy;
        ListNode* temp = head;
        while(temp!=NULL){
            copy.push_back(temp->val);
            temp= temp->next;
        }

        
        temp = head;
        int i = copy.size()-1;
        while(temp!=NULL){
            temp->val = copy[i];
            temp=temp->next;\
            i--;
        }
        return head;
    }
};

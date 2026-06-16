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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp){
            count++;
            temp = temp->next;
        }
        count = count - n;
        temp = head;
        if(count>0){
        while(count){
            prev = temp;
            temp=temp->next;
            count--;
        }
         prev->next = temp->next;
         delete temp;
        }
        else{
            
               ListNode* temp1 = head;
               head  = head->next;
               delete temp1;
        }
       
        

        return head;
    }
};

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
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp = head;
        int count =0;
        if(head->next==NULL){
            return 1;
        }
        while(temp){
            temp = temp->next;
            count++;
        }
        count/=2;
        temp=head;
        
            ListNode* prev = NULL;
        
       
        while(count--){
            prev= temp;
             temp = temp->next;
        }
         prev->next=NULL;
        ListNode* fut = NULL;
        prev = NULL;
        while(temp){
            fut=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fut;
        }
        ListNode* head1 = head;
        ListNode* head2 = prev;

        while(head1){
            if(head1->val != head2->val){
                return 0;
            }
            else{
                head1= head1->next;
                head2=head2->next;
            }
        }
        return 1;
    }
};

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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast= head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
       
        slow=slow->next;
        fast=fast->next->next;
        bool cyl = true;
        while(fast!=slow){
            if(fast==NULL|| fast->next==NULL){
                cyl= false;
                break;

            }
            fast=fast->next->next;
            slow=slow->next;
            
           
        }
        
        if(cyl==true){
            ListNode* ptr2=head;
            while(ptr2!=slow){
                ptr2=ptr2->next;
                slow=slow->next;
            }

            return ptr2;
        }
    return NULL;


        
    }
};
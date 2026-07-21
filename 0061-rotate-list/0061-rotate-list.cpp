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
        if(k==0|| head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp=head;
        int cnt=1;
        ListNode* curr=head;
        while(curr->next!=NULL){
            cnt++;
            curr=curr->next;
        }
        k=k%cnt;

        while(k!=0){
             curr=temp;
            
            while(curr->next->next!=NULL){
                curr=curr->next;
            }
            curr->next->next=temp;
            temp=curr->next;
            curr->next=NULL;
            k--;
        }
        return temp;
        
    }
};
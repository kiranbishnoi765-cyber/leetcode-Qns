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
        vector<int> mp;
        
        while(head!=NULL){
            mp.push_back(head->val);
            head=head->next;
            

        }
        int n=mp.size();
        for(int i=0;i<n;i++){
            if(mp[i]==mp[n-(i+1)]){
                continue;
            }else{
                return false;
            }
        }
        return true;
        
    }
};
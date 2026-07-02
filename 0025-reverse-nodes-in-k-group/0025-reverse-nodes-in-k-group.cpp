class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        int n = cnt / k;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* prevGroupTail = NULL;

        for (int i = 0; i < n; i++) {
            ListNode* groupHead = curr;   // yeh is group ka naya tail banega
            int val = 1;
            while (val <= k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                val++;
            }

            if (prevGroupTail == NULL) {
                head = prev;              // pehla group — overall head update
            } else {
                prevGroupTail->next = prev; // pichle group ko naye head se jodo
            }

            groupHead->next = curr;       // is group ka tail, agle part se jodo
            prevGroupTail = groupHead;
            prev = NULL;                  // next group ke liye reset
        }

        return head;
    }
};
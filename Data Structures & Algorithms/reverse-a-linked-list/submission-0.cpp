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
        ListNode* dummy = nullptr;

        ListNode *curr = head;
        ListNode *nextp = NULL;
        while(curr){

            nextp = curr->next;
            curr->next = dummy;
            dummy = curr;
            curr = nextp;
        }
        return dummy;

    }
};

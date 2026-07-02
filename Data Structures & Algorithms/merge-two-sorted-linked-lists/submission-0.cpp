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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *first = list1;
        ListNode *second = list2;

        ListNode dummy(0);
        ListNode *prev = &dummy;
        while(first && second){
            if(first->val >= second->val){
                prev->next = second;
                prev = second;
                second = second->next;
            }
            else{
                prev->next = first;
                prev = first;
                first = first->next;
            }
        }
        while(first){
            prev->next = first;
            prev = first;
            first = first->next;
        }
        while(second){
            prev->next = second;
            prev = second;
            second = second->next;
        }
    return dummy.next;

    }
};

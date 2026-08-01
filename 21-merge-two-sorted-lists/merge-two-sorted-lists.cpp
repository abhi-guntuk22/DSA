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
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        
        // Correctly initialize the dummy node on stack
        ListNode dummy(0);
        ListNode* curr = &dummy;

        // Loop runs safely only when BOTH lists have elements
        while(t1 != NULL && t2 != NULL)
        {
            if(t1->val < t2->val)
            {
                curr->next = t1;
                t1 = t1->next; // Only advance t1
            }
            else {
                curr->next = t2;
                t2 = t2->next; // Only advance t2
            }
            curr = curr->next; // Safely advance our tail pointer
        }

        // Link the remaining nodes of whichever list is left over
        if(t1 != NULL) {
            curr->next = t1;
        } else {
            curr->next = t2;
        }

        // Return the actual head of the merged list (skipping the dummy)
        return dummy.next;
    }  
};

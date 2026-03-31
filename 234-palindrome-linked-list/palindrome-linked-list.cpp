class Solution {
public:

    // Reverse function
    ListNode* rev(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* newhead = rev(head->next);
        ListNode* front = head->next;

        front->next = head;
        head->next = NULL;

        return newhead;
    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* newhead = rev(slow);

        ListNode* first = head;
        ListNode* sec = newhead;

        // Compare
        while (sec != NULL) {
            if (first->val != sec->val) {
                rev(newhead); // restore
                return false;
            }
            first = first->next;
            sec = sec->next;
        }

        rev(newhead); // restore list
        return true;
    }
};
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
    // Helper function to reverse a linked list
    ListNode* rev(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* front = curr->next; // 1. Save next node
            curr->next = prev;           // 2. Reverse link
            prev = curr;                 // 3. Move prev forward
            curr = front;                // 4. Move curr forward
        }
        return prev; // Corrected: Return prev (the new head)
    }

    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        ListNode* slow = head;
        ListNode* fast = head;
        
        // 1. Find the middle node
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Disconnect first half from second half and reverse second half
        ListNode* secondHalfStart = slow->next;
        slow->next = nullptr; // Corrected: Cut the link to prevent loops
        
        ListNode* sechead = rev(secondHalfStart);

        // 3. Interleave/Merge both halves in a zigzag fashion
        ListNode* first = head;
        ListNode* sec = sechead;

        while (sec != nullptr) {
            // Temporarily save original next pointers
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = sec->next;

            // Wire the nodes together (zigzag connection)
            first->next = sec;
            sec->next = tmp1;

            // Step forward cleanly to the saved positions
            first = tmp1;
            sec = tmp2;
        }
    }
};

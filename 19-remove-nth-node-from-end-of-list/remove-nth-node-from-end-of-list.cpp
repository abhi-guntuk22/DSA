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
     
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     if(head==NULL) return head;
     ListNode*fast=head;
     for(int i=0;i<=n;i++)
     {
        if(fast==NULL) return head->next; // if n is equal to the length of the list
        fast=fast->next;
     }
        ListNode*slow=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        ListNode*delnode=slow->next;
        slow->next=slow->next->next;    
        delete delnode;
        return head;
        
    }
};
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
      
    ListNode*curr=head;
    int cnt=0;
    while(curr!=NULL)
    {
     cnt++;
     curr=curr->next;
    }
    int len=cnt-n;
    curr=head;
    if(len == 0)
    {
       curr=curr->next;
       delete head;
       return curr;
    }
    while(len>1)
    {
        curr=curr->next;
        len--;

    }
    ListNode*delnode=curr->next;
      curr->next=delnode->next;
     delnode->next=NULL;
      delete delnode;

      return head;
    }

};
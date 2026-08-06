/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;

        ListNode*curr=head;
        int pos=0;
       while(curr!=NULL)
       {
        if(mp.find(curr)!=mp.end())
        {
          return curr;
          break;
        }
        mp[curr]=pos;
        curr=curr->next;
        pos++;


       }
      return NULL;

     
        
    }
};
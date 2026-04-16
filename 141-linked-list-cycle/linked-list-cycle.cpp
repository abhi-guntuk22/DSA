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
    bool hasCycle(ListNode *head) {
        // ListNode*temp=head;
        // unordered_map<ListNode*,int>mp;

        // if(head->next==NULL) return false;

        // while(temp!=NULL)
        // {
        //     
        //     if(mp.find(temp)!=mp.end())
        //     {
        //         return true;
        //         break;
        //     }
                //  mp[temp]=1;
                // temp=temp->next;     
        // }
        //return flase;



        // while(1)
        // {
        //     if(temp->next==NULL||temp==NULL) 
        //     { 
        //         return false;
        //         break;
        //     }
        //     else{
        //         return true;
        //         break;
        //     }
        //     temp=temp->next;
             

        // }

        ListNode*slow=head;
          ListNode*fast=head;

          while(fast!=NULL && fast->next!=NULL)
          {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast) return true;
          }
         return false;

        
    }
};
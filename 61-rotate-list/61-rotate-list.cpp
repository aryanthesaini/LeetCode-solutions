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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k==0 or head==NULL or head->next==NULL) return head;
        
        int n=1;
        ListNode* cur = head;
        while(cur->next!=NULL){
            cur = cur->next;
            n++;
        }
        cur->next = head;
        k = k%n;
        int x = n-k;
        
        while(x--){
            cur = cur->next;
        }
        head= cur->next;
        cur->next =NULL;
        return head;
        
    }
};
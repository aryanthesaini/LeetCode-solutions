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
    bool isPalindrome(ListNode* head) {
        vector<int>temp;
        ListNode* cur = head;
        while(cur!=NULL){
            temp.push_back(cur->val);
            cur = cur->next;
        }
        vector<int>temp2= temp;
        reverse(temp.begin(), temp.end());
        
        return temp2==temp;
    }
};
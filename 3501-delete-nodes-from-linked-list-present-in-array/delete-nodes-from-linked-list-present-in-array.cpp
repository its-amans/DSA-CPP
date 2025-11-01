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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int n=nums.size();
        unordered_set<int> st(nums.begin(),nums.end());
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;

        ListNode* node=dummy;
            while(node->next != NULL){
                if(st.count(node->next->val)){
                    node->next=node->next->next;
                }
                else{
                    node=node->next;
                }
            }

        ListNode* newhead=dummy->next;
        return newhead;
    }
};
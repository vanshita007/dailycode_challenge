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
   
    int pairSum(ListNode* head) {

        vector<int> a;
        while(head!=NULL){
            a.push_back(head->val);
            head = head->next;
        }
        int n = a.size();
        int max = INT_MIN;
        for(int i=0;i<=(a.size()/2)-1;i++){
            int ans = a[i] + a[n-1-i];
            if(ans>max){
                max = ans;
            }
        }
        return max;
    }
};

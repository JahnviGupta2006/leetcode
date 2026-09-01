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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
       
        int first=-1;
        int pos=1;
        int prev=-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        while(head->next->next !=NULL){
            if((((head->next->val)>(head->val)) && ((head->next->val)>(head->next->next->val))) || (((head->next->val)<(head->val)) && ((head->next->val)<(head->next->next->val))  )){
           
           if(first==-1){
            first=pos;
           }
           else{
            mini=min(mini,pos-prev);
           
           }
           prev=pos;
           
        }
        head=head->next;
        pos++;
        }
        maxi=prev-first;
        if(mini==INT_MAX ){
            mini=-1;

        }
        if(maxi==INT_MIN  || first==-1 || first==prev){
            maxi=-1;
            
        }
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};
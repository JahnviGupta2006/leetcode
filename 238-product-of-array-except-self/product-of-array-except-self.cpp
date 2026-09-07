class Solution {
public:
    long long findpro(vector<int>&nums, int i){
        long long pro=1;
        for(int j=0;j<nums.size();j++){
            if(j==i){
                continue;
            }
            pro=pro*nums[j];
        } 
        return pro;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prod=1;
         for(int i=0;i<nums.size();i++){
           prod=prod*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)ans.push_back(prod/nums[i]);
            else{
            ans.push_back(findpro(nums,i));}
        }
        return ans;
    }
};
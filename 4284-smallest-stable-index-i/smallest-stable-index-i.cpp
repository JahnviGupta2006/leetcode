class Solution {
public:

    int mini(vector<int>&nums, int i){
        int mn=INT_MAX;
        for(int j=i;j<nums.size();j++){
            mn=min(mn,nums[j]);
        }
        return mn;
    }
    int maxi(vector<int>&nums, int i){
        int mx=INT_MIN;
        for(int j=0;j<=i;j++){
            mx=max(mx,nums[j]);
        }
        return mx;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if((maxi(nums,i)-mini(nums,i))<=k){
                idx=i;
                break;
            }
        }
        return idx;
    }
};
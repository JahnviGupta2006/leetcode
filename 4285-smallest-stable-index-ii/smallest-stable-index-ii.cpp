class Solution {
public:

    // int mini(vector<int>&nums, int i){
    //    int mn=INT_MAX;
    //     for(int j=i;j<nums.size();j++){
    //         mn=min(mn,nums[j]);
    //     }
    //     return mn;
    // }
    // int maxi(vector<int>&nums, int i){
    //     int mx=INT_MIN;
    //     for(int j=0;j<=i;j++){
    //         mx=max(mx,nums[j]);
    //     }
    //     return mx;
    // }
    int firstStableIndex(vector<int>& nums, int k) {
        int idx=-1;
        int n=nums.size();
        int arr1[n];
        int arr2[n];
        arr1[0]=nums[0];
        arr2[n-1]=nums[n-1];
        for(int i=1;i<nums.size();i++){
            arr1[i]=max(arr1[i-1],nums[i]);
            arr2[n-i-1]=min(arr2[n-i],nums[n-i-1]);
        }
        for(int i=0;i<n;i++){
            if(arr1[i]-arr2[i]<=k){
                idx=i;
                break;
            }
        }
        return idx;
    }
};
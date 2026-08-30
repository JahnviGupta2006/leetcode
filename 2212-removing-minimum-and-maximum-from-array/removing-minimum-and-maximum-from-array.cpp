class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        int n=nums.size();
        if(n==1)return 1;
        int minp;
        int maxp;
        int mi;
        int ma;
        int ans1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
                mi=i+1;
                continue;
            }
            if(nums[i]==maxi){
                ma=i+1;
                continue;
            }
        }
        ans1=max(mi,ma);
        int mn;
        int mx;
        int ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
                mn=n-i;
                continue;
            }
            if(nums[i]==maxi){
                mx=n-i;
                continue;
            }
        }
        ans2=max(mn,mx);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
               
                minp=min(i+1,(n-i));
                continue;
            }
            if(nums[i]==maxi){
                
                maxp=min(i+1,(n-i));
                continue;
            }
        }
        int ans3=minp+maxp;
      
        return min( ans3,min(ans1,ans2));

    }
};
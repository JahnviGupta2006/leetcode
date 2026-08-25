class Solution {
public:
    
    
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int arr[51]={0};
        for(int i=0;i<n;i++){
            arr[(nums[i])%51]++;
        }
        vector<int>num;
       
        for(int i=0;i<51;i++){
            if(arr[i]==1){
                num.push_back(i);
               
            }
            
        }
        
        int ans=INT_MIN;
        for(int i=0;i<num.size();i++){
            if((num[i]==nums[0] && num[i]!=nums[n-1]) || (num[i]!=nums[0] && num[i]==nums[n-1])){
                ans=max(ans,num[i]);
            }
            else if(num[i]==nums[0] && num[i]==nums[n-1])
            continue;
            
        }
        if(n==1)return nums[0];
        int maxi=INT_MIN;

        if(k==n ){
            for(int i=0;i<n;i++){
                maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        if(k==1 &&num.size()!=0){
            for(int i=0;i<num.size();i++){
                maxi=max(maxi,num[i]);
            }
            return maxi;
        }
        if(ans == INT_MIN)
    return -1;
        return ans;

    }
};
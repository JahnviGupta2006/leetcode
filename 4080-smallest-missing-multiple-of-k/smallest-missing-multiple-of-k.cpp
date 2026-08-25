class Solution {
public:
    int find(vector<int>nums,int i,int num){
        if((num>nums[nums.size()-1])||(num<nums[0]))return -1;
        for(int j=i;j<nums.size();j++){
            if(nums[j]==num)return j;
        }
        return -1;
    }
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int org=k;
        int j=1;
        while(find(nums,i,k)!=-1){
           
            i=find(nums,i,k);
            j++;
            k=org*j;
        }
        if(find(nums,i,k)==-1)return k; 
        return i;
    }
};
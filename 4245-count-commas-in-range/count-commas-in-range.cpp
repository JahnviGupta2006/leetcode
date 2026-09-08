class Solution {
public:
    int countCommas(int n) {
        if(n<999)return 0;
        int ans;
        
            if(n>=1000 && n<1000000){
                ans= n-1000+1;
            }
    
        return ans;
    }
};
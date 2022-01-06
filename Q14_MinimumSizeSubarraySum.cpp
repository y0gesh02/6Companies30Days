class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int sum=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum<target)j++;
            else if(sum>=target){
                while(sum>=target){
                    mini=min(j-i+1,mini);
                    sum-=nums[i];
                    i++;
                }
                j++;
            }
            
        }
        if(mini==INT_MAX) return 0;
        return mini;
    }
};

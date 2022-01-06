class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       	int i=0;
    	int j=0;
    	int pro=1;
    	int cnt=0;
    	while(j<nums.size()){
    		pro=pro*nums[j];
    		if(pro>=k){
    			while(pro>=k  && i<=j){
    				pro=pro/nums[i];
    				i++;
				}
			}
            cnt+=j-i+1;
			
			j++;
		}
		return cnt;
    }
};

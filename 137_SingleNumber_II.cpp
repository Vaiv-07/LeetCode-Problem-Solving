class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i == n-1){
                return nums[i];
            }
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
            else{
                i = i + 2 ;
            }
        }

        return -1;
        
    }
};

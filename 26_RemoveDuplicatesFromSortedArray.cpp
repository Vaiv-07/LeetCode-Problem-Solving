class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int unique = nums[0];
        int count = 1;
        for(int i=0; i<n; i++){
            if(unique != nums[i]){
                unique = nums[i];
                nums[count] = unique;
                count++;
            }
        }
        
        return count;
    }
};

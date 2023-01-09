class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans = -1;
        int mid = start + (end-start)/2;

        while(start <= end) {

            if(nums[mid] == target) {
                return mid;
            }

            if(target > nums[mid]) {
                start = mid + 1;
            }
            else{ 
                end = mid - 1;
                ans = mid;
            }

            mid = start + (end-start)/2;
        }
        return mid;
        
    }
};

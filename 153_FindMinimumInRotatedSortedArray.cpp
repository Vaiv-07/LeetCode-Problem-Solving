class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        if(nums[start] < nums[end]){
            return nums[start];
        }
        else{
            int s = 0;
            int e = n-1;
            int mid = s + (e-s)/2;

            while(s<e) {

                if(nums[mid] >= nums[0])
                {
                    s = mid+1;
                }
                else{
                    e = mid;
                }
                mid = s + (e-s)/2;
            }
            return nums[s];
        } 
    }
};

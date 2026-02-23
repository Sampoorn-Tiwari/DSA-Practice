class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lowptr = 0 ; 
        int highptr = nums.size() - 1;

        while(lowptr <= highptr){

            int middleptr = lowptr + (highptr - lowptr)/2;

            if(nums[middleptr] == target)
            return middleptr;

            else if(target > nums[middleptr])
            lowptr = middleptr + 1;

            else if(target < nums[middleptr])
            highptr = middleptr - 1;
        }
        return -1;
    }
};
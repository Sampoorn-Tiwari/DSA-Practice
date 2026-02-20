class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {

        int count = 0;

        if(nums.size() < 3) return count;

        int left = 0 ; int right = left + 2;
        bool flag = false;

        while(right < nums.size()){

            for(int i = left + 1 ; i < right ; i++){
                if(nums[i - 1] - nums[i] != nums[i] - nums[i+1]){
                    flag = false;
                    break;
                }
                flag = true;
            }

            if(flag){
                count += (right - left - 1);
                right++;
            }
            else{
                left = right - 1;
                right = left + 2;
            }
        }

        return count;
    }
};
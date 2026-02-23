class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> r(nums.size() , 0);
        int ptr = 0;
        int rptr = 0;
        int rrptr = 1;

        while(ptr < nums.size()){

            if(nums[ptr] >= 0){
                r[rptr] = nums[ptr];
                rptr+=2;
            }

            if(nums[ptr] < 0){

                r[rrptr] = nums[ptr];
                rrptr+=2;
            }

            ptr++;
        }
        return r;
    }
};
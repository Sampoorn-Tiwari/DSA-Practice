class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mpp;
       
       for(int i=0;i<nums.size();i++){
        int num2=target-nums[i];
        if(mpp.count(num2)){
            return {mpp[num2],i};
        }
        mpp[nums[i]]=i;
       }
       return {};
    }
};
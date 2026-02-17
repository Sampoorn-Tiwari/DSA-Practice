class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> evenfreq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                evenfreq[nums[i]]++;
            }
        }
        int highest_frequency=0;
        for(auto& x : evenfreq){
            if(x.second>highest_frequency)
            highest_frequency=x.second;
        }
        int tie=-1;
        for(auto& y : evenfreq){
            if(y.second==highest_frequency){
                if(y.first<tie||tie==-1){
                    tie=y.first;
                }
            }
            
        }
        if(tie!=-1){
            return tie;
        }
        else{
            return -1;
        }

    }
};
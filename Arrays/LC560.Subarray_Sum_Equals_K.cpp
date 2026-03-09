class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int , int> logbook;
        logbook[0] = 1;

        int current_sum;
        int count = 0;

        for(auto i : nums){

            current_sum += i;

            if(logbook.find(current_sum -k) != logbook.end()){

                count += logbook[current_sum - k];
            }

            logbook[current_sum]++;
        }

        return count;
    }
};
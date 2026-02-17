//number shrinks
//if it repeats it means that thing is not going to hit one its a cycle loop breaks temp == 1 returns false
//if temp == 1 loop breaks and temp == 1 returns true which means number is happy
class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> seen;

        long long temp = n;

        while(temp != 1 && seen.find(temp) == seen.end()){
            seen.insert(temp);
            long long next_sum = 0;

            while(temp > 0){
                int digit = temp % 10;
                next_sum += (digit * digit);
                temp /= 10;
            }

            temp = next_sum;
        }

        return temp == 1;
    }
};
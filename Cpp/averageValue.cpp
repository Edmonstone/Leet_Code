class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum = 0 ;
        for(auto x : nums){
            if(x % 2 == 0 && x % 3 == 0){
                sum += x;
                count++;
            }
        }
        if (count == 0) {
            return 0;
        }
        return sum/count;
    }
};

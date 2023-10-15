class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int max_count = 0,div = 0;
        for(int x : divisors){
            int count = 0;
            for(int y : nums){
                if( y % x == 0){
                    count++; 
                }
            }
            if(count == max_count){
                div = (div == 0) ? x : min(div,x);
            }
            else if(max_count < count){
                max_count = count;
                div = x;
            }
        }
        return div;
    }
};

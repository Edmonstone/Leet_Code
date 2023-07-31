class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[n-1]*nums[n-1];
        for(int i = 1 ;i < n;i++){
            if(n % i == 0){
                sum += nums[i-1]*nums[i-1];
            } 
        }
        if(n ==0){
            return 0;
        }
        return sum;
    }
};

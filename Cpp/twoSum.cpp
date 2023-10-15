class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> check;
        vector<int> answer;
        for(int i = 0;i<nums.size();i++){
            int complement = target - nums[i];
            if(check.find(complement) != check.end()){
                answer.push_back(check[complement]);
                answer.push_back(i);
                return answer;
            }
            check[nums[i]] = i;
        }
        return answer;
    }
};

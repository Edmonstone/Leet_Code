class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int i = 0;
        while(i<n){
            nums1.push_back(nums2[i]);
            i++;
        }
        sort(nums1.begin(),nums1.end()); 
        int m = nums1.size();
        if(m%2 != 0){
            return nums1[m / 2];
        }
        return (nums1[m / 2 - 1] + nums1[m / 2]) / 2.0;
    }
};

// 643. Maximum Average Subarray I
// You are given an integer array nums consisting of n elements, and an integer k.
// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

// Example 1:
// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

// Example 2:
// Input: nums = [5], k = 1
// Output: 5.00000
 

// Constraints:
// n == nums.length
// 1 <= k <= n <= 105
// -104 <= nums[i] <= 104

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int p = 0;
        double ans = INT_MIN;
        for(int j = k-1;j<nums.size();j++){
            double sum = 0;
            while(i<=j){
                sum+=nums[i];
                i++;
            }
            double avg = sum/k;
            ans = max(avg, ans);
            p++;
            i = p;
        }
        return ans;

    }
};
// 152. Maximum Product Subarray
// Given an integer array nums, find a subarray that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.
// Note that the product of an array with a single element is the value of that element.

// Example 1:
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Example 2:
// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 
// Constraints:
// 1 <= nums.length <= 2 * 104
// -10 <= nums[i] <= 10
// The product of any subarray of nums is guaranteed to fit in a 32-bit integer.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPro = nums[i];
        int minPro = nums[i];
        int ans = nums[i];
        
        // for(int i=1; i<n; i++){
        //     if(nums[i] < 0){
        //         swap(maxPro, minPro);
        //     }
        //     maxPro = max(nums[i], nums[i]*maxPro);
        //     minPro = min(nums[i], nums[i]*minPro);

        //     ans = max(ans, maxPro);
        // }

        for(int i=1; i<n; i++){
            int preMax = maxPro;
            int preMin = minPro;

            maxPro = max(nums[i], nums[i]*preMax, nums[i]*preMin);
            minPro = min(nums[i], nums[i]*preMax, nums[i]*preMin);
            
            ans = max(ans, maxPro);

        }
        return ans;
    
    }
};
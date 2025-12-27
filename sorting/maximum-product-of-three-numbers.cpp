class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int n = nums.size();

        long long prod1 = 1LL * nums[0] * nums[1] * nums[2];        // top 3
        long long prod2 = 1LL * nums[0] * nums[n-1] * nums[n-2];    // 2 smallest + largest

        return (int)max(prod1, prod2);
    }
};

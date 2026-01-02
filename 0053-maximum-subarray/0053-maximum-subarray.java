class Solution {
    public int maxSubArray(int[] nums) {
        int ans = Integer.MIN_VALUE;
        int prev = 0;
        for(int i = 0; i < nums.length; i++){
            int curr = Math.max(prev,0)+nums[i];
            ans = Math.max(ans,curr);
            prev = curr;
        }
        return ans;
    }
}
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int cnt_array[101] = {0};
        for(int i = 0; i < n; i++)
        {
          cnt_array[nums[i]] += 1;
        }
        int max_freq = 0;
        for(int i = 1; i <= 100; i++)
        {
            max_freq = max(max_freq,cnt_array[i]);
        }
        int total = 0;
        for(int i = 1; i <= 100 ; i++)
        {
            if(cnt_array[i] == max_freq)
            {
                total += cnt_array[i];
            }
        }
        return total;
        
    }
};
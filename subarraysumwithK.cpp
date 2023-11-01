// using this you can claculate tha subarray sum with specific sum that given by the user
class Solution {
public:
    vector<int> findMaxAverage(vector<int>& nums, int k) {
        vector<int> p;   // storing sum in this
        int Sum = 0;   

        if (k > 0 && k <= nums.size()) { 
          // first subarray sum
          for (int i = 0; i < k; ++i) {
            Sum += nums[i];
          }
          p.push_back(Sum);

          // using sliding window to calculate the subarray sum
          for (int i = k; i < nums.size(); ++i) {
            Sum = Sum - nums[i - k] + nums[i];
            p.push_back(Sum);
          }
          
        }
        return p;
    }
};

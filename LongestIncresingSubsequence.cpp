// using tabulation method

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n,1);  // initialize the space 
        int lis = 1;         
        // Iterate through each element in the array
        for (int i = 0; i < n; i++) {
            // Iterate through the elements before the current element
            for (int j = 0; j < i; j++) {
                // Check if the current element is greater than the previous element
                if (nums[j] < nums[i]) {
                    // If true, update the length of the LIS for the current element
                    t[i] = max(t[i], t[j] + 1);
                    
                    // Update the overall LIS length if needed
                    lis = max(lis, t[i]);
                }
            }
        }
        return lis;
    }
};


// (Using concept of Patience Sorting (O(nlogn)

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // Get the size of the input array
        int n = nums.size();
        
        // Create a vector 'v' to store the current LIS
        vector<int> v;
        
        // Iterate through each element in the array
        for(int i = 0; i < n; i++) {
            // Use binary search (lower_bound) to find the position to insert or update the element
            auto it = lower_bound(begin(v), end(v), nums[i]);
            
            // If the element is greater than or equal to all elements in 'v'
            if(it == end(v)) {
                // Append the element to the end of 'v'
                v.push_back(nums[i]);
            } else {
                // If not, update the element at the found position with the current element
                *it = nums[i];
            }
        } 
        // Return the size of 'v', which represents the length of the LIS
        return v.size();
    }
};

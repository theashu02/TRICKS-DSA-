#include <iostream>
#include <vector>

using namespace std;

void findSubsequences(vector<int>& nums, vector<int>& subsequence, int k, int index) {
    if (subsequence.size() == k) {
        // Print or process the subsequence
        for (int num : subsequence) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = index; i < nums.size(); ++i) {
        subsequence.push_back(nums[i]);
        findSubsequences(nums, subsequence, k, i + 1);
        subsequence.pop_back();
    }
}

int main() {
    vector<int> nums = {1,3,3,2};
    int k = 3; // Size of subsequence
    
    vector<int> subsequence;
    findSubsequences(nums, subsequence, k, 0);
    
    return 0;
}

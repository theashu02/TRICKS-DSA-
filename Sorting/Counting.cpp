#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void countingSort(std::vector<int>& arr) {
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    
    int range = max - min + 1;

    vector<int> count(range, 0);

    for (int i = 0; i < arr.size(); i++) {
        count[arr[i] - min]++;
    }

    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Output array to store the sorted result
    vector<int> output(arr.size());

    // Build the output array
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    // Copy the sorted elements back into the original array
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
    }
}

int main() {
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    
    countingSort(arr);
    
    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}

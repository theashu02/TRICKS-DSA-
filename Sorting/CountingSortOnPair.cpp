#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void countingSort(vector<pair<int, int>>& p, int maxVal) {
    int n = p.size();
    
    vector<int> count(maxVal + 1, 0);
    vector<pair<int, int>> output(n);
    
    for (int i = 0; i < n; i++) {
        count[p[i].first]++;
    }
    
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[p[i].first] - 1] = p[i];
        count[p[i].first]--;
    }

    for (int i = 0; i < n; i++) {
        p[i] = output[i];
    }
}

int main() {
    vector<int> v = {9, 4, 3, 2, 0, 7, 1};
    int n = v.size();
    
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        p.push_back({v[i], i});  
    }

    int maxVal = *max_element(v.begin(), v.end());

    countingSort(p, maxVal);
    
    // Display the sorted result
    cout << "Sorted pairs (value, original index): " << endl;
    for (auto& pair : p) {
        cout << pair.first << " " << pair.second<<endl;
    }

    return 0;
}

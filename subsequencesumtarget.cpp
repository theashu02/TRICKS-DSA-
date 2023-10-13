#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int> &ans, int s, int sum, int arr[],int n){
    if(index==n){
        if(s==sum){
            for(auto i:ans) cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    
    ans.push_back(arr[index]);
    s += arr[index];
    
    solve(index+1, ans, s, sum, arr, n);
    
    s -= arr[index];
    ans.pop_back();
    
    solve(index+1,ans, s, sum, arr, n);
     
}

int main() {
    int arr[] = {1,2,3,1,1,1};
    vector<int> ans; int n = 6;
    int sum = 4;
    solve(0,ans,0,sum,arr,n);

    return 0;
}


// output:
// 1 2 1 
// 1 2 1 
// 1 2 1 
// 1 3 
// 1 1 1 1 
// 2 1 1 
// 2 1 1 
// 2 1 1 
// 3 1 
// 3 1 
// 3 1 
